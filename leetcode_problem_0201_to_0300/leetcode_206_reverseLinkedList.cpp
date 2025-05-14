
// 206. REVERSE LINKED LIST

#include<iostream>

using namespace std ;

struct ListNode {
	int val ;
	ListNode * next ;
} ;

ListNode * reverseList(ListNode * head)
{
	if(head == NULL)
		return head ;
	ListNode * prev = NULL ;
	ListNode * current = head ;
	ListNode * next = NULL ;
	while(current != NULL)
	{
		next = current->next ;
		current->next = prev ;
		prev = current ;
		current = next ;
	}
	head = prev ;
	return head ;
}

void disp(ListNode * head) {
	if(head == NULL)
		cout << "Empty Linked List....." << endl ;
	else {
	    ListNode *t = head ;
	    while(t != NULL)
	    {
	    	cout << t->val << " -> " ;
	    	t = t->next ;
	    }
	    cout << "NULL" << endl << endl ;
	}
}

int main()
{
	ListNode * head ;
	ListNode *s, *t ;
	ListNode * reverse ;
	
	cout << endl ;
	cout << "  REVERSE LINKED LIST  " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^ " << endl ;
	
	// head = new ListNode ;
	// head->val = 1 ;		head->next = NULL ;
	// t = head ;
	// s = new ListNode ;
	// s->val = 2 ;	s->next = NULL ;	t->next = s;	
	// t = s ;
	
	head = new ListNode ;
	head->val = 1 ;		head->next = NULL ;
	t = head ;
	s = new ListNode ;
	s->val = 2 ; 	s->next = NULL ;	 t->next = s ;
	t = s ;
	s = new ListNode ;
	s->val = 3 ; 	s->next = NULL ;	 t->next = s ;
	t = s ;
	s = new ListNode ;
	s->val = 4 ; 	s->next = NULL ;	 t->next = s ;
	t = s ;
	s = new ListNode ;
	s->val = 5 ; 	s->next = NULL ;	 t->next = s ;
	t = s ;
	s = new ListNode ;
	s->val = 6 ; 	s->next = NULL ;	 t->next = s ;
	t = s ;
	
	cout << endl ;
	
	disp(head) ;
	
	reverse = reverseList(head) ;
	
	disp(reverse) ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;	
}