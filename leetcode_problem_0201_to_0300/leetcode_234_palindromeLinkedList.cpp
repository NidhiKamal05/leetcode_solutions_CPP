
// 234. PALINDROME LINKED LIST

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/palindrome-linked-list/solutions/8354035/c-solution-beats-9709-on-time-o1-space-b-y4wq/

/* JAVA */
// https://leetcode.com/problems/palindrome-linked-list/solutions/8354048/java-solution-by-nidhi_kamal-8ga9/

#include<iostream>

using namespace std ;

struct ListNode {
	int val ;
	ListNode *next ;
} ;

ListNode* reverseListNode(ListNode* head) {
	if(head == NULL)
        return head ;
    ListNode* prev = NULL ;
    ListNode* curr = head ;
    ListNode* next = NULL ;
    while(curr != NULL) {
        next = curr->next ;
        curr->next = prev ;
        prev = curr ;
        curr = next ;
    }
    return prev ;
}

bool isPalindrome(ListNode* head) {
	if(head->next == NULL)
        return true ;
    ListNode* slow = head ;
    ListNode* fast = head ;
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next ;
        fast = fast->next->next ;
    }
    ListNode* p = head ;
    ListNode* q = reverseListNode(slow) ;
    while(p != slow && q != NULL) {
        if(p->val != q->val) 
            return false ;
        p = p->next ;
        q = q->next ;
    }
    return true ;
}

int main()
{
	ListNode * head ;
	ListNode *s, *t ;
	bool ans ;
	
	cout << endl ;
	cout << "  PALINDROME LINKED LIST " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	head = new ListNode ;
	head->val = 1 ;		head->next = NULL ;
	
	// head = new ListNode ;
	// head->val = 1 ;		head->next = NULL ;
	// t = head ;
	// s = new ListNode ;
	// s->val = 2 ;	s->next = NULL ;	t->next = s;	
	// t = s ;
	
	// head = new ListNode ;
	// head->val = 1 ;		head->next = NULL ;
	// t = head ;
	// s = new ListNode ;
	// s->val = 2 ; 	s->next = NULL ;	 t->next = s ;
	// t = s ;
	// s = new ListNode ;
	// s->val = 2 ; 	s->next = NULL ;	 t->next = s ;
	// t = s ;
	// s = new ListNode ;
	// s->val = 1 ; 	s->next = NULL ;	 t->next = s ;
	// t = s ;
	
	// head = new ListNode ;
	// head->val = 1 ;		head->next = NULL ;
	// t = head ;
	// s = new ListNode ;
	// s->val = 2 ; 	s->next = NULL ;	 t->next = s ;
	// t = s ;
	// s = new ListNode ;
	// s->val = 3 ; 	s->next = NULL ;	 t->next = s ;
	// t = s ;
	// s = new ListNode ;
	// s->val = 2 ; 	s->next = NULL ;	 t->next = s ;
	// t = s ;	
	// s = new ListNode ;
	// s->val = 1 ; 	s->next = NULL ;	 t->next = s ;
	// t = s ;
	
	cout << endl ;
	
	ans = isPalindrome(head) ;
	
	if(ans)
		cout << "TRUE..." << endl ;
	else
		cout << "FALSE..." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;	
}