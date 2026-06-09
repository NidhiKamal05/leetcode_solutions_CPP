
// 203. REMOVE LINKED LIST ELEMENTS

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/remove-linked-list-elements/solutions/8323884/c-0-ms-runtime-beats-100-linked-list-by-lrat2/

/* JAVA */
// https://leetcode.com/problems/remove-linked-list-elements/solutions/8323897/java-solution-1-ms-runtime-beats-9605-on-bacx/

#include<iostream>

using namespace std ;

struct ListNode{
	int val ;
	ListNode *next ;
} ;

ListNode * removeElements(ListNode * head, int val){
	ListNode *dummy = new ListNode ;
	dummy->next = head ;
	ListNode *p = dummy ;
	ListNode *temp = new ListNode ;
	while(p->next != NULL){
		if(p->next->val == val){
			temp = p->next ;
			p->next = p->next->next ;
			delete(temp) ;
		}
		else{
			p = p->next ;
		}
	}
	return dummy->next ;
}

/*ListNode * removeElements(ListNode * head, int val){
	if(head == NULL)
		return head ;
	ListNode *temp = new ListNode ;
	int FLAG = 0 ;
	if(head->val == val){
		temp = head ;
		head = head->next ;
		delete(temp) ;
		return removeElements(head, val) ;
	}
	else{
		ListNode *p = head ;
		while(p != NULL){
			if(p->next->next == NULL){
				FLAG = 1 ;
			}
			if(p->next->val == val){
				temp = new ListNode ;
				temp = p->next ;
				p->next = p->next->next ;
				delete(temp) ;
				if(FLAG == 1)
					return head ;
				break ;
			}
			p = p->next ;
		}
	return removeElements(head, val) ;
	}
	return head ;
}*/

void disp(ListNode * head)
{
	if(head == NULL)
		cout << "Empty Linked List....." << endl ;
	else 
	{
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
	ListNode * result ;
	int val ;
	
	cout << endl ;
	cout << "  REMOVE LINKED LIST ELEMENTS  " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ " << endl ;
	
	head = new ListNode ;
	head->val = 1 ;		head->next = NULL ;
	t = head ;
	s = new ListNode ;
	s->val = 2 ;	s->next = NULL ;	t->next = s;	
	t = s ;	
	s = new ListNode ;
	s->val = 3 ;	s->next = NULL ;	t->next = s;	
	t = s ;
	s = new ListNode ;
	s->val = 4 ;	s->next = NULL ;	t->next = s;	
	t = s ;
	
	// head = new ListNode ;
	// head->val = 7 ;		head->next = NULL ;
	// t = head ;
	// s = new ListNode ;
	// s->val = 7 ;	s->next = NULL ;	t->next = s;	
	// t = s ;	
	// s = new ListNode ;
	// s->val = 7 ;	s->next = NULL ;	t->next = s;	
	// t = s ;
	// s = new ListNode ;
	// s->val = 7 ;	s->next = NULL ;	t->next = s;	
	// t = s ;
	
	// head = new ListNode ;
	// head->val = 1 ;		head->next = NULL ;
	// t = head ;
	// s = new ListNode ;
	// s->val = 2 ; 	s->next = NULL ;	 t->next = s ;
	// t = s ;
	// s = new ListNode ;
	// s->val = 6 ; 	s->next = NULL ;	 t->next = s ;
	// t = s ;
	// s = new ListNode ;
	// s->val = 3 ; 	s->next = NULL ;	 t->next = s ;
	// t = s ;
	// s = new ListNode ;
	// s->val = 4 ; 	s->next = NULL ;	 t->next = s ;
	// t = s ;
	// s = new ListNode ;
	// s->val = 5 ; 	s->next = NULL ;	 t->next = s ;
	// t = s ;
	// s = new ListNode ;
	// s->val = 6 ; 	s->next = NULL ;	 t->next = s ;
	// t = s ;
	
	cout << endl ;
	cout << "Enter value : " ;
	cin >> val ;
	
	cout << endl ;
	
	disp(head) ;
	
	result = removeElements(head, val) ;
	
	if(result != NULL)
	    disp(result) ;
	else 
		cout << "Empty List....." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;	
}



/*ListNode * removeElements(ListNode * head, int val)
{
	if(head == NULL)
		return head ;
	ListNode * prev = head ;
	ListNode * current = head ;
	ListNode * temp = head ;
	ListNode * t ;
	int c = 0 ;
	while(current != NULL)
	{
		if(current->val == val){
		    if(current == head){
		    	t = head ;
		    	head = head->next ;
		    	free(t) ;
		    	current = head ;
				continue ;
		    }
		    else if(current->next->next == NULL){
		    	t = current->next ;
		    	current->next = NULL ;
		    	free(t) ;
		    	current = current->next ;
				continue ;
		    }
		    else{
		    	
		    }
		}
		else{
			current = current->next ;
		}
		/*if(current->val == val)
		{
			++c ;
			t = current ;
			prev->next = current->next ;
			t->next = NULL ;
			// prev = current ;
			current = prev->next ;
			free(t) ;
			// current = prev->next ;
			continue ;
		}
		else
		{
		    prev = current ;
		    current = current->next ;
		}
	}
	if(c == 0)
		return head ;
	if(head == NULL)
		return NULL ;
	else
		return head ;
	return head ;
}*/