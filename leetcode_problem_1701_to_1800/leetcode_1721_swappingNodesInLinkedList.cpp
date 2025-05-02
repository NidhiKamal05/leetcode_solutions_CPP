
// 1721. SWAPPING NODES IN LINKED LIST 

#include<iostream>

using namespace std ;

struct ListNode{
	int val ;
	ListNode *next ;
} ;

int countNodes(ListNode * head){
	ListNode * p = head ;
	int c = 0 ;
	while(p){
		++c ;
		p = p->next ;
	}
	return c ;
}

ListNode * swapNodes(ListNode * head, int k){
	int count = countNodes(head) ;
	ListNode *p = head ;
	ListNode *q = head ;
	for(int i=0; i<k-1; ++i)
		p = p->next ;
	for(int i=0; i<count-k; ++i)
		q = q->next ;
	int t = p->val ;
	p->val = q->val ;
	q->val = t ;
	return head ;
}

int main()
{
	ListNode *result ;
	ListNode *head, *u, *t, *s ;
	int k ;
	
	cout << endl ;
	cout << "  SWAPPING NODES IN LINKED LIST " << endl ;
	cout << " *******************************" << endl ;	
	
	head = new ListNode ;
	head->val = 1 ; head->next = NULL ;
	s = head ;	
	u = new ListNode ;
	u->val = 3 ;   u->next = NULL ;   s->next = u ;   s = u ;
	u = new ListNode ;
	u->val = 5 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	u = new ListNode ;
	u->val = 7 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	u = new ListNode ;
	u->val = 9 ;   u->next = NULL ;   s->next = u ;   s = u ;
	
	cout << endl ;
	result = head ;
	while(result){
		cout << result->val << "->" ;
		result = result->next ;
	}
	cout << "NULL" ;
	
	cout << endl ;
	cout << "Enter position : " ;
	cin >> k ;
	
	result = swapNodes(head, k) ;
	
	cout << endl ;
	
	while(result){
		cout << result->val << "->" ;
		result = result->next ;
	}
	cout << "NULL" ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

/*ListNode * swapNodes(ListNode * head, int k){
	int count = countNodes(head) ;
	int f = 1, l = 1 ;
	ListNode * i = head ;
	ListNode * j = head ;
	ListNode * prevI = NULL ;
	ListNode * nextI = i->next ;
	// while((f!=k) && (l!=(c-k+1))){
	// while((f!=k-1) || (l!=(c-k))){
	while((f!=k) || (l!=(c-k))){
		if(f!=k){
		// if(f!=k-1){
			++f ;
			prevI = i ;
			i = i->next ;
			nextI = nextI->next ;
		}
		// if(l!=(c-k+1)){
		if(l!=(c-k)){
			++l ;
			j = j->next ;
		}
	}
	temp_prev->next = j->next ;
	temp_next->next = i ;
	i->next = j->next->next ;
	temp_prev->next->next = temp_next ;
	return head ;
}*/


/*int c = countNodes(head) ;
        int f = 1, l = 1 ;
        ListNode * i = head ;
        ListNode * j = head ;
        ListNode * temp_prev = NULL ;
        ListNode * temp_next = i->next ;
        while((f!=k) || (l!=(c-k))){
            if(f!=k){
                ++f ;
                temp_prev = i ;
                i = i->next ;
                temp_next = temp_next->next ;
            }
            if(l!=(c-k)){
                ++l ;
                j = j->next ;
            }
        }
        temp_prev->next = j->next ;
        temp_next->next = i ;
        i->next = j->next->next ;
        temp_prev->next->next = temp_next ;
        return head ;
*/