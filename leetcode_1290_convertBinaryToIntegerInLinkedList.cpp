
// 1290. CONVERT BINARY NUMBER IN A LINKED LIST TO INTEGER

#include<iostream>
#include<vector>
#include<cmath>

using namespace std ;

struct ListNode {
    int val ;
    ListNode *next ;
} ;

int getDecimalValue(ListNode *head){
    vector<int> binary{} ;
    ListNode * p ;
    p = head ;
    while(p != NULL){
        binary.push_back(p->val) ;
        p = p->next ;
    }
    int i = 0 ;
    int sum = 0 ;
    for(int j=binary.size()-1; j>=0; --j){
        if(binary.at(j) == 1){
            sum += pow(2,i) ;
        }
        ++i ;
    }
    return sum ; 
}

/*int main()
{
	int result ;
	ListNode *head, *u, *t, *s ;
	
	cout << endl ;
	cout << "  BINARY TO INTEGER  " << endl ;
	cout << " -----*********----- " << endl ;

    /* .......TEST CASE 5....... 
	head = new ListNode ;
	head->val = 1 ; head->next = NULL ;
	s = head ;
	u = new ListNode ;
	u->val = 0 ;   u->next = NULL ;   s->next = u ;   s = u ;
	u = new ListNode ;
	u->val = 1 ;  u->next = head ; s->next = u ;   s = u ;
	 ....... RETURNS TRUE ....... 
	
	
	result = getDecimalValue(head) ;
	
	cout << endl ;
	cout << "Equivalent Integer = " << result << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}*/