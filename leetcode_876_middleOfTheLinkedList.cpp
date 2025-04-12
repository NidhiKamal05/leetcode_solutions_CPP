
// 876. MIDDLE OF THE LINKED LIST

#include<iostream>

using namespace std ;

struct ListNode {
    int val ;
    ListNode *next ;
} ;

ListNode* middleNode(ListNode* head) {
    ListNode *slow ;
    ListNode *fast ;
    slow = head ;
    fast = head ;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next ;
        slow = slow->next ;
    }
    return slow ;
}

/*ListNode * middleNode(ListNode *head){
    ListNode *slow ;
    ListNode *fast ;
    slow = head ;
    fast = head ;
    while(fast->next != NULL || fast != NULL){
        slow = slow->next ;
		fast = fast->next->next ;
        if(fast->next->next == NULL)
            return slow->next ;
    }
    return slow ;
}*/

/*int main()
{
	ListNode *result ;
	ListNode *head, *u, *t, *s ;
	
	cout << endl ;
	cout << "  MIDDLE OF THE LINKED LIST  " << endl ;
	cout << " ------***************------ " << endl ;	
	
	/* .......TEST CASE 1....... 
	head = new ListNode ;
	head->val = 1 ; head->next = NULL ;
	s = head ;	
	u = new ListNode ;
	u->val = 2 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	t = u ;
	u = new ListNode ;
	u->val = 3 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	u = new ListNode ;
	u->val = 4 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	u = new ListNode ;
	u->val = 5 ;   u->next = t ;   s->next = u ;   s = u ;

    result = middleNode(head) ;
	
	cout << endl ;
	
    cout << result->val << "->" << result->next->val << "->" << result->next->next->val << "->NULL" ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}*/