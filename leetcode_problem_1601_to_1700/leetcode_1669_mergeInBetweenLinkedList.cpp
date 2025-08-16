
// 1669. MERGE IN BETWEEN LINKED LISTS

#include<iostream>

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

ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
	ListNode *l2 = list2 ;
	while(l2->next != NULL) {
		l2 = l2->next ;
	}
	
	ListNode *dummy = new ListNode ;
	dummy->next = list1 ;
	int cnt ;
	
	ListNode *q = dummy ; 
	cnt = -1 ;
	while(cnt != b) {
		q = q->next ;
		++cnt ;
	}
	l2->next = q->next ;
	
	ListNode *p = dummy ;
	cnt = -1 ;
	while(cnt != (a-1)) {
		p = p->next ;
		++cnt ;
	}
	ListNode *temp = p->next ;
	p->next = list2 ;
	
	q->next = NULL ;
	
	delete(temp) ;
	
	return dummy->next ;
}

int main()
{
	ListNode *result ;
	ListNode *list1, *list2, *u, *s, *v, *t ;
	
	cout << endl ;
	cout << "  MERGE IN BETWEEN LINKED LIST " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;	
	
	/* .......TEST CASE 1....... */
	list1 = new ListNode ;
	list1->val = 10 ; list1->next = NULL ;
	s = list1 ;	
	u = new ListNode ;
	u->val = 1 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	u = new ListNode ;
	u->val = 13 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	u = new ListNode ;
	u->val = 6 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	u = new ListNode ;
	u->val = 9 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	u = new ListNode ;
	u->val = 5 ;   u->next = NULL ;   s->next = u ;   s = u ;
	
	list2 = new ListNode ;
	list2->val = 1000000 ; list2->next = NULL ;
	s = list2 ;	
	u = new ListNode ;
	u->val = 1000001 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	u = new ListNode ;
	u->val = 1000002 ;   u->next = NULL ;   s->next = u ;   s = u ;
	int a = 3, b = 4 ;
	
	/* .......TEST CASE 2....... */
	// list1 = new ListNode ;
	// list1->val = 0 ; list1->next = NULL ;
	// s = list1 ;	
	// u = new ListNode ;
	// u->val = 1 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	// u = new ListNode ;
	// u->val = 2 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	// u = new ListNode ;
	// u->val = 3 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	// u = new ListNode ;
	// u->val = 4 ;   u->next = NULL ;   s->next = u ;   s = u ;
	// u = new ListNode ;
	// u->val = 5 ;   u->next = NULL ;   s->next = u ;   s = u ;
	// u = new ListNode ;
	// u->val = 6 ;   u->next = NULL ;   s->next = u ;   s = u ;
	
	// list2 = new ListNode ;
	// list2->val = 1000000 ; list2->next = NULL ;
	// s = list2 ;	
	// u = new ListNode ;
	// u->val = 1000001 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	// u = new ListNode ;
	// u->val = 1000002 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	// u = new ListNode ;
	// u->val = 1000003 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	// u = new ListNode ;
	// u->val = 1000004 ;   u->next = NULL ;   s->next = u ;   s = u ;
	// int a = 2, b = 5 ;
	
	cout << endl << "Input.....\n" ;
	disp(list1) ;
	disp(list2) ;
	
	result = mergeInBetween(list1, a, b, list2) ;
	
	cout << endl << "Output.....\n" ;
	disp(result) ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}