
// 2816. DOUBLE A NUMBER REPRESENTED AS A LINKED LIST

#include<iostream>
#include<stack>

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
	    while(t) {
	    	cout << t->val << " -> " ;
	    	t = t->next ;
	    }
	    cout << "NULL" << endl << endl ;
	}
}

ListNode* doubleIt(ListNode* head) {
	stack<int> s ;
    ListNode *p = head ;
    while(p) {		
        s.push(p->val) ;
        p = p->next ;
    }
    ListNode *dummy = new ListNode ;
    dummy->next = NULL ;
    int carry = 0 ;
    ListNode *temp = new ListNode ;
    while(!s.empty() || carry) {
        int num = carry ;
        if(!s.empty()) {
            num += (2*s.top()) ;
            s.pop() ;
        }
        if(num > 9) {
            carry = num/10 ;
            num %= 10 ;
        }
        else {
            carry = 0 ;
        }
        temp = new ListNode ;
        temp->val = num ;
        temp->next = dummy->next ;
        dummy->next = temp ;
    }
    return dummy->next ;
}

int main() {
	ListNode *result ;
	ListNode *head, *u, *s ;
	
	cout << endl ;
	cout << "  DOUBLE A NUMBER REPRESENTED AS A LINKED LIST " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;	
	
	/* .......TEST CASE 1....... */
	// head = new ListNode ;
	// head->val = 1 ; head->next = NULL ;
	// s = head ;	
	// u = new ListNode ;
	// u->val = 8 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	// u = new ListNode ;
	// u->val = 9 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	
	/* .......TEST CASE 2....... */
	head = new ListNode ;
	head->val = 9 ; head->next = NULL ;
	s = head ;	
	u = new ListNode ;
	u->val = 9 ;   u->next = NULL ;   s->next = u ;   s = u ;
	u = new ListNode ;
	u->val = 9 ;   u->next = NULL ;   s->next = u ;   s = u ;
	
	/* .......TEST CASE 3....... */
	// head = new ListNode ;
	// head->val = 0 ; head->next = NULL ;
	
	/* .......TEST CASE 4....... */
	// l1 = new ListNode ;
	// l1 = NULL ;
	// l2 = new ListNode ;
	// l2->val = 1 ; l2->next = NULL ;
	
	/* .......TEST CASE 5....... */
	// l1 = new ListNode ;
	// l1->val = 2 ; l1->next = NULL ;
	// l2 = new ListNode ;
	// l2 = NULL ;
	
	cout << endl << "Input.....\n" ;
	disp(head) ;
	
	result = doubleIt(head) ;
	
	cout << endl << "Output.....\n" ;
	disp(result) ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}