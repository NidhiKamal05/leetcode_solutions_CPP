
// 147. INSERTION SORT LIST

#include<iostream>
#include<vector>

using namespace std ;

struct ListNode{
    int val ;
    ListNode * next ;
}

ListNode * sortList(ListNode * head)
{
    if(head == NULL){
        return head ;
    }
	int temp ;
    ListNode * p = NULL ;
    ListNode * q = NULL ;
    p = head ;
	while(p->next != NULL){
        q = p->next ;
		while(q != NULL){
			if(p->val > q->val){
				temp = p->val ;
				p->val = q->val ;
				q->val = temp ;
			}
            q = q->next ;
		}
        p = p->next ;
	}
    return head ;
}


/*if(head == NULL){
            return head ;
        }
        int t ;
        ListNode * p = head ;
        ListNode * q ;
        // q->val = -1 ;
        q->next = head ;
        while(p->next != NULL){
            if(p->val > p->next->val){
				t = p->val ;
				p->val = p->next->val ;
				p->next->val = t ;
                p = q ;
			}
            p = p->next ;
        }
        return head ;*/