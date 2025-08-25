
// 61. ROTATE LIST 

#include<iostream>
// #include<map>

using namespace std ;

struct ListNode {
	int val ;
	ListNode *next ;
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

ListNode* rotateRight(ListNode* head, int k) {
	if(head == NULL || head->next == NULL || k == 0) {
        return head ;
    }	
    ListNode* dummy = new ListNode ;
    dummy->next = head ;
    ListNode* p = dummy ;
    int cnt = 0 ;
    while(p->next != NULL) {
        ++cnt ;
        p = p->next ;
    }
    if(k % cnt == 0) {
        return head ;
    }
    p->next = head ;
    p = dummy ;
    int i = 0 ;
    while(i < (cnt - (k % cnt))) {
        p = p->next ;
        ++i ;
    }
    head = p->next ;
    p->next = NULL ;
    return head ;
}

int main()
{
	ListNode *result ;
	ListNode *head, *u, *s ;
	
	cout << endl ;
	cout << "  ROTATE LIST " << endl ;
	cout << " ^^^^^^^^^^^^^" << endl ;

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
	int k = 2 ;
	
	/* .......TEST CASE 2....... */
	// head = new ListNode ;
	// head->val = 0 ; head->next = NULL ;
	// s = head ;		
	// u = new ListNode ;
	// u->val = 1 ;   u->next = NULL ;   s->next = u ;   s = u ;
	// u = new ListNode ;
	// u->val = 2 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	// u = new ListNode ;
	// int k = 4 ;
	
	disp(head) ;
	
	result = rotateRight(head, k) ;
	
	cout << endl ;
	disp(result) ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}