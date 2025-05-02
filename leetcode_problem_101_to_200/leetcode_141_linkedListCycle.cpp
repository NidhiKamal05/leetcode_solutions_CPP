
// 141. LINKED LIST CYCLE

#include<iostream>

using namespace std ;

struct ListNode{
	int val ;
	ListNode *next ;
} ;

bool hasCycle(ListNode *head){
	struct ListNode *slow ;
	struct ListNode *fast ;
	slow = head ;
	fast = head ;
	while(fast != NULL && fast->next != NULL){
		slow = slow->next ;
		fast = fast->next->next ;
		if(slow == fast)
		    return true ;
	}
	return false ;
}

/*bool hasCycle(ListNode *head)
{
	struct ListNode *i, *j ;
	i = head ;
	j = head ;
	while(j){
		i = i->next ;		
		if((j->next == NULL)||(j->next->next == NULL))
			return false ;
		j = j->next->next ;
        // if((j->next == NULL)||(j->next->next == NULL))
			// return false ;		
		if(i == j)
			return true ;
	}
	return false ;
}*/

int main()
{
	bool result ;
	ListNode *head, *u, *t, *s ;
	
	cout << endl ;
	cout << "  LINKED LIST CYCLE  " << endl ;
	cout << " -----*********----- " << endl ;	
	
	/* .......TEST CASE 1....... */
	head = new ListNode ;
	head->val = 1 ; head->next = NULL ;
	s = head ;	
	u = new ListNode ;
	u->val = 3 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	t = u ;
	u = new ListNode ;
	u->val = 5 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	u = new ListNode ;
	u->val = 7 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	u = new ListNode ;
	u->val = 9 ;   u->next = t ;   s->next = u ;   s = u ;
	/* ....... RETURNS TRUE ....... */
	
	// head = NULL ;
	
	/* .......TEST CASE 2....... */
	// head = new ListNode ;
	// head->val = 1 ; head->next = NULL ;
	// s = head ;	
	// u = new ListNode ;
	// u->val = 3 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	// u = new ListNode ;
	// u->val = 5 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	// u = new ListNode ;
	// u->val = 7 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	// u = new ListNode ;
	// u->val = 9 ;   u->next = NULL ;   s->next = u ;   s = u ;
	/* ....... RETURNS FALSE ....... */
	
	
	
	/* .......TEST CASE 3....... */
	// head = new ListNode ;
	// head->val = 1 ; head->next = NULL ;
	// s = head ;
	// u = new ListNode ;
	// u->val = 2 ;  u->next = head ; s->next = u ;   s = u ;
	/* ....... RETURNS TRUE ....... */
	
	
	
	/* .......TEST CASE 4....... */
	// head = new ListNode ;
	// head->val = 1 ; head->next = NULL ;
	/* ....... RETURNS FALSE ....... */
	
	
	
	/* .......TEST CASE 5....... */
	// head = new ListNode ;
	// head->val = 1 ; head->next = NULL ;
	// s = head ;
	// u = new ListNode ;
	// u->val = -4 ;   u->next = NULL ;   s->next = u ;   s = u ;
	// u = new ListNode ;
	// u->val = 2 ;  u->next = head ; s->next = u ;   s = u ;
	/* ....... RETURNS TRUE ....... */
	
	
	result = hasCycle(head) ;
	
	cout << endl ;
	if(result == 1)
	{
	    cout << "TRUE" << endl ;
	}
	else
	{
	    cout << "FALSE"<< endl ;
	}
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



/*if((j->next == NULL)||(j->next->next == NULL))
		{
			// j = head ;
			continue ;
		}*/
		// if((j->next == NULL)||(head->next->next == NULL))
		// if((i != j)&&(j->next == NULL))
	    // if((j->next == NULL)||(i->next == NULL))
	    // if(j->next == NULL)