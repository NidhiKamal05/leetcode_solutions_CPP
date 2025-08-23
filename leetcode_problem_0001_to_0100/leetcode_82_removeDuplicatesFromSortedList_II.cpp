
// 82. REMOVE DUPLICATES FROM SORTED LIST II

#include<iostream>
#include<map>

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

ListNode* deleteDuplicates(ListNode* head) {
	if(!head) {
		return head ;
	}
	map<int, int> mp ;
	ListNode *p = head ;
	while(p != NULL) {
		mp[p->val]++ ;
		p = p->next ;
	}	
	ListNode *dummy = new ListNode ;
	dummy->next = head ;
	p = dummy ;
	ListNode *temp = new ListNode ;
	while(p->next != NULL) {
		if(mp[p->next->val] > 1) {
			temp = p->next ;
			p->next = temp->next ;
			temp->next = NULL ;
			delete(temp) ;		
		}
		else {
			p = p->next ;
		}
	}
	return dummy->next ;
}

int main()
{
	ListNode *result ;
	ListNode *head, *u, *s ;
	
	cout << endl ;
	cout << "  REMOVE DUPLICATES FROM SORTED LIST II " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;

	/* .......TEST CASE 1....... */
	// head = new ListNode ;
	// head->val = 1 ; head->next = NULL ;
	// s = head ;	
	// u = new ListNode ;
	// u->val = 2 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	// u = new ListNode ;
	// u->val = 3 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	// u = new ListNode ;
	// u->val = 3 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	// u = new ListNode ;
	// u->val = 4 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	// u = new ListNode ;
	// u->val = 4 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	// u = new ListNode ;
	// u->val = 5 ;   u->next = NULL ;   s->next = u ;   s = u ;
	
	/* .......TEST CASE 2....... */
	head = new ListNode ;
	head->val = 1 ; head->next = NULL ;
	s = head ;	
	u = new ListNode ;
	u->val = 1 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	u = new ListNode ;
	u->val = 1 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	u = new ListNode ;
	u->val = 2 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	u = new ListNode ;
	u->val = 3 ;   u->next = NULL ;   s->next = u ;   s = u ;
	
	disp(head) ;
	
	result = deleteDuplicates(head) ;
	
	cout << endl ;
	disp(result) ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}