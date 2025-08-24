
// 3217. DELETE NODES LINKED LIST PRESENT IN ARRAY

#include<iostream>
#include<vector>
#include<unordered_set>

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

ListNode* modifiedList(vector<int>& nums, ListNode* head) {
	unordered_set<int> numbers(nums.begin(), nums.end()) ;
    ListNode* dummy = new ListNode() ;
    dummy->next = head ;
    ListNode* curr = dummy ;
    ListNode* temp = new ListNode() ;
    while(curr->next != NULL) {
        int num = curr->next->val ;
        if(numbers.count(num)) {
            temp = curr->next ;
            curr->next = curr->next->next ;
            temp->next = NULL ;
        }
        else {
            curr = curr->next ;
        }
    }
    return dummy->next ;
}

int main()
{
	ListNode *result ;
	ListNode *head, *u, *s ;
	
	cout << endl ;
	cout << "  DELETE NODES LINKED LIST PRESENT IN ARRAY " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;	
	
	/* .......TEST CASE 1....... */
	// head = new ListNode ;
	// head->val = 1 ; head->next = NULL ;
	// s = head ;	
	// u = new ListNode ;
	// u->val = 2 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	// u = new ListNode ;
	// u->val = 3 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	// u = new ListNode ;
	// u->val = 4 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	// u = new ListNode ;
	// u->val = 5 ;   u->next = NULL ;   s->next = u ;   s = u ;
	// vector<int> v = {1,2,3} ;
	
	/* .......TEST CASE 2....... */
	head = new ListNode ;
	head->val = 1 ; head->next = NULL ;
	s = head ;	
	u = new ListNode ;
	u->val = 2 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	u = new ListNode ;
	u->val = 1 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	u = new ListNode ;
	u->val = 2 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	u = new ListNode ;
	u->val = 1 ;   u->next = NULL ;   s->next = u ;   s = u ;
	u = new ListNode ;
	u->val = 2 ;   u->next = NULL ;   s->next = u ;   s = u ;
	vector<int> v = {1} ;
	
	/* .......TEST CASE 3....... */
	// head = new ListNode ;
	// head->val = 1 ; head->next = NULL ;
	// s = head ;	
	// u = new ListNode ;
	// u->val = 2 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	// u = new ListNode ;
	// u->val = 3 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	// u = new ListNode ;
	// u->val = 4 ;   u->next = NULL ;   s->next = u ;   s = u ;
	// vector<int> v = {5} ;	
	
	cout << endl << "Input.....\n" ;
	disp(head) ;
	
	result = modifiedList(v, head) ;
	
	cout << endl << "Output.....\n" ;
	disp(result) ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}