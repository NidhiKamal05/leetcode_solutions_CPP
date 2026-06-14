
// 2130. MAXIMUM TWIN SUM OF A LINKED LIST

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/solutions/8333506/c-0-ms-runtime-beats-100-memory-beats-85-ntqp/

/* JAVA */
// https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/solutions/8333522/java-solution-tc-on-sc-o1-by-nidhi_kamal-zekx/

#include<iostream>

using namespace std ;

struct ListNode {
	int val ;
	ListNode *next ;
} ;

ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL ;
    ListNode* curr = head ;
    ListNode* next = NULL ;
    while(curr != NULL) {
        next = curr->next ;
        curr->next = prev ;
        prev = curr ;
        curr = next ;
    }
    head = prev ;
    return head ;
}

int pairSum(ListNode* head) {
    int maxSum = INT_MIN ;
    ListNode* prevSlow = new ListNode() ;
    ListNode* slow = head ;
    ListNode* fast = head ;
    while(fast != NULL && fast->next != NULL) {
        prevSlow = slow ;
        slow = slow->next ;
        fast = fast->next->next ;
    }
    prevSlow->next = NULL ;
    slow = reverseList(slow) ;
    ListNode* p = head ;
    while(p != NULL) {
        maxSum = max(maxSum, ((p->val) + (slow->val))) ;
        slow = slow->next ;
        p = p->next ;
    }
    return maxSum ;
}

void disp(ListNode * head) {
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

int main() {
	ListNode *head ;
	ListNode *s, *t ;
	int maxTwinSum ;
	
	cout << endl ;
	cout << "  MAXIMUM TWIN SUM OF A LINKED LIST  " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ " << endl ;
	
	// head = new ListNode ;
	// head->val = 1 ;		head->next = NULL ;
	// t = head ;
	// s = new ListNode ;
	// s->val = 100000 ;	s->next = NULL ;	t->next = s;	
	// t = s ;
	
	// head = new ListNode ;
	// head->val = 5 ;		head->next = NULL ;
	// t = head ;
	// s = new ListNode ;
	// s->val = 4 ; 	s->next = NULL ;	 t->next = s ;
	// t = s ;
	// s = new ListNode ;
	// s->val = 2 ; 	s->next = NULL ;	 t->next = s ;
	// t = s ;
	// s = new ListNode ;
	// s->val = 1 ; 	s->next = NULL ;	 t->next = s ;
	// t = s ;
	
	head = new ListNode ;
	head->val = 4 ;		head->next = NULL ;
	t = head ;
	s = new ListNode ;
	s->val = 2 ; 	s->next = NULL ;	 t->next = s ;
	t = s ;
	s = new ListNode ;
	s->val = 2 ; 	s->next = NULL ;	 t->next = s ;
	t = s ;
	s = new ListNode ;
	s->val = 3 ; 	s->next = NULL ;	 t->next = s ;
	t = s ;
	
	cout << endl ;	
	disp(head) ;
	
	maxTwinSum = pairSum(head) ;
	
	cout << endl ;
	cout << "Maximum Twin Sum = " << maxTwinSum << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;	
}