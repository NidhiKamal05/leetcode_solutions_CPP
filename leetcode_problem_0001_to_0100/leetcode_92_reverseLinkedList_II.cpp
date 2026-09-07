
// 92. REVERSE LINKED LIST II

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/reverse-linked-list-ii/solutions/8507674/c-runtime-beats-100-tc-on-sc-o1-by-nidhi-o8ka/

/* JAVA */
// https://leetcode.com/problems/reverse-linked-list-ii/solutions/8507681/java-solution-runtime-beats-100-0-ms-on-hzbrs/

#include<iostream>

using namespace std ;

struct ListNode {
	int val ;
	ListNode * next ;
} ;

void disp(ListNode* head) {
	if(head == NULL)
		cout << "Empty Linked List....." << endl ;
	else {
	    ListNode *t = head ;
	    while(t != NULL) {
	    	cout << t->val << " -> " ;
	    	t = t->next ;
	    }
	    cout << "NULL" << endl << endl ;
	}
}

ListNode* reverse(ListNode* head) {
	ListNode *prev = NULL ;
	ListNode *curr = head ;
	ListNode *next = NULL ;
	while(curr != NULL) {
		next = curr->next ;
		curr->next = prev ;
		prev = curr ;
		curr = next ;
	}
	return prev ;
}

ListNode* reverseBetween(ListNode* head, int left, int right) {
	if(!head || left == right) {
        return head ;
    }
    ListNode *dummy = new ListNode() ;
    dummy->next = head ;
    ListNode *prevSlow = NULL ;
    ListNode *slow = dummy ;
    ListNode *fast = dummy ;
    int cnt = 0 ;
    while(cnt < left) {
        prevSlow = slow ;
        slow = slow->next ;
        ++cnt ;
    }
    cnt = 0 ;
    while(cnt < right) {
        fast = fast->next ;
        ++cnt ;
    }
    ListNode *temp = fast->next ;
    fast->next = NULL ;
    prevSlow->next = reverse(slow) ;
    slow->next = temp ;
    return dummy->next ;
}

	// cout << "prevSlow.....\n" ;
	// disp(prevSlow) ;
	// cout << "slow.....\n" ;
	// disp(slow) ;
	// cout << "fast.....\n" ;
	// disp(fast) ;
	// cout << "Reverse1.....\n" ;
	// disp(head) ;
	// cout << "Reverse2.....\n" ;
	// disp(prev) ;

int main()
{
	ListNode *result ;
	ListNode *head, *u, *s ;
	int left, right ;
	
	cout << endl ;
	cout << "  REVERSE LINKED LIST II " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;	
	
	/* .......TEST CASE 1....... */
	head = new ListNode ;
	head->val = 1 ; head->next = NULL ;
	s = head ;	
	u = new ListNode ;
	u->val = 2 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	u = new ListNode ;
	u->val = 3 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	u = new ListNode ;
	u->val = 4 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	u = new ListNode ;
	u->val = 5 ;   u->next = NULL ;   s->next = u ;   s = u ;
	left = 2 ; right = 4 ;
	
	/* .......TEST CASE 2....... */
	// head = new ListNode ;
	// head->val = 5 ; head->next = NULL ;
	// left = 1 ; right = 1 ;	
	
	cout << endl << "Input.....\n" ;
	disp(head) ;
	
	result = reverseBetween(head, left, right) ;
	
	cout << endl << "Output.....\n" ;
	disp(result) ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}