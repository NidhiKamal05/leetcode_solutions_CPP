
// 2095. DELETE THE MIDDLE NODE OF A LINKED LIST

#include<iostream>

using namespace std ;

struct ListNode{
	int val ;
	ListNode *next ;
} ;

ListNode * deleteMiddle(ListNode * head){
	if(head->next == NULL)
		return head ;
	ListNode *prevSlow = NULL ;
	ListNode *slow = head ;
    ListNode *fast = head ;
    ListNode *temp = NULL ;
    while(fast != NULL && fast->next != NULL){
		prevSlow = slow ;
        fast = fast->next->next ;
        slow = slow->next ;
    }
	temp = slow ;
	prevSlow->next = slow->next ;
	temp->next = NULL ;
    return head ;
}