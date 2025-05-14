
// 109. CONVERT SORTED LIST TO BINARY SERACH TREE

#include<iostream>

using namespace std ;

struct ListNode {
    int val ;
    ListNode *next ;
} ;

struct TreeNode{
	int val ;
	TreeNode *left ;
	TreeNode *right ;
} ;

TreeNode * sortedListToBST(ListNode * head){
	if(head == NULL)
		return NULL ;
	if(head->next == NULL)
		return new TreeNode(head->val) ;
	ListNode * prev = NULL ;
	ListNode * slow = head;
	ListNode * fast = head ;
	while(fast != NULL && fast->next != NULL){
		prev = slow ;
		fast = fast->next->next ;
		slow = slow->next ;
	}
	prev->next = NULL ;
	TreeNode *t = new TreeNode(slow->val) ;
	t->left = sortedListToBST(head) ;
	t->right = sortedListToBST(slow->next) ;
	return t ;
}