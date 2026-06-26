
// 83. REMOVE DUPLICATES FROM SORTED LIST

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/remove-duplicates-from-sorted-list/solutions/8359710/c-runtime-0-ms-beats-100-easy-solution-b-iiur/

/* JAVA */
// https://leetcode.com/problems/remove-duplicates-from-sorted-list/solutions/8359739/java-solution-0-ms-runtime-beats-100-on-kyiqx/

#include<iostream>

using namespace std ;

struct ListNode {
	int val ;
	ListNode * next ;
} ;

ListNode* deleteDuplicates(ListNode* head) {
    if(!head) return head ;
    ListNode* p = head ;
    while(p->next != NULL) {
        if(p->val == p->next->val) {
            p->next = p->next->next ;
        }
        else {
            p = p->next ;
        }
    }
    return head ;
}

/** SOLUTION PREVENTS MEMORY LEAKAGE **/
/*ListNode* deleteDuplicates(ListNode* head) {
	if(head == NULL)
		return head ;
	ListNode* p = head ;
	ListNode* temp = new ListNode() ;
	while(p->next != NULL) {
		if(p->val == p->next->val) {
			temp = p->next ;
			p->next = temp->next ;
			temp->next = NULL ;
			delete(temp) ;
		}
		else {
			p = p->next ;
		}
	}
	return head ;
}*/

int main() {
	ListNode *result ;
	ListNode *head, *u, *s ;
	
	cout << endl ;
	cout << "  REMOVE DUPLICATES FROM SORTED LIST " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;	
	
	/* .......TEST CASE 1....... */
	head = new ListNode ;
	head->val = 1 ; head->next = NULL ;
	s = head ;	
	u = new ListNode ;
	u->val = 1 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	u = new ListNode ;
	u->val = 2 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	u = new ListNode ;
	u->val = 3 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	u = new ListNode ;
	u->val = 3 ;   u->next = NULL ;   s->next = u ;   s = u ;
	
	result = deleteDuplicates(head) ;
	
	cout << endl ;
	while(result != NULL) {
		cout << result->val << "->" ;
		result = result->next ;
	}
	cout << "NULL" ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

/*ListNode * deleteDuplicates(ListNode * head)
{ cout << "F------" ;
	ListNode * current = head ;
	ListNode * t = NULL ;
	ListNode * prev = NULL ;
	
	while((current->next != NULL) || (current != NULL)){ cout << "L------" ;
		if(current->val == current->next->val){ cout << "C1------" ;
			t = current->next ;
			current->next = current->next->next ;
			t->next = NULL ;
			free(t) ;
		}
		// if((current->val == prev->val)&&(prev != NULL)){ cout << "C2------" ;
			// t = current ;
			// prev->next = current->next ;
			// current = current->next ;
			// t->next = NULL ;
			// free(t) ;
		// }
		// else if(current->val != prev->val){ cout << "C3------" ;
			// prev = current ;
		    // current = current->next ;
	    // }
		// else continue ;
		// else{
			// prev = current ;
			// current = current->next ;
		// }
		current = current->next ;
	}
	cout << "ppppp" ;
	return head ;
}*/

// ListNode * cur_next = head->next ;
// while(current->next->next != NULL){
	// if(current->val == cur_next->val){
		// t = cur_next ;
		// current->next = cur_next->next ;
		// cur_next->next = NULL ;
	// }
	// else{
		// cur_next = cur_next->next ;
		// current = current->next ;
	// }
	// cur_next = cur_next->next ;
	// current = current->next ;
// }