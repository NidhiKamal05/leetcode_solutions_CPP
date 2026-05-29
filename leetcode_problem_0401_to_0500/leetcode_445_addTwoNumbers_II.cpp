
// 445. ADD TWO NUMBERS II

/** T.C. - O(M + N) & S.C. - O(M + N) **/

/* C++ */
// https://leetcode.com/problems/add-two-numbers-ii/solutions/8301119/c-solution-by-nidhi_kamal-4yzh/

/* JAVA */
// https://leetcode.com/problems/add-two-numbers-ii/solutions/8301156/java-by-nidhi_kamal-b4gr/

#include<iostream>
#include<stack>

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
	    while(t) {
	    	cout << t->val << " -> " ;
	    	t = t->next ;
	    }
	    cout << "NULL" << endl << endl ;
	}
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	if(!l1)
		return l2 ;
	if(!l2)
		return l1 ;
	
	ListNode *dummy = new ListNode ;
	ListNode *p = new ListNode ;
	
	stack<int> s1 ;
	dummy->next = l1 ;
	p = dummy ;
	while(p->next) {
		s1.push(p->next->val) ;
		p = p->next ;
	}
	
	stack<int> s2 ;
	dummy->next = l2 ;
	p = dummy ;
	while(p->next) {
		s2.push(p->next->val) ;
		p = p->next ;
	}
	
	stack<int> s ;
	int carry = 0 ;
	while(!s1.empty() || !s2.empty() || carry) {
		int sum = 0 ;
		sum += carry ;
		if(!s1.empty()) {
			sum += s1.top() ;
			s1.pop() ;
		}
		if(!s2.empty()) {
			sum += s2.top() ;
			s2.pop() ;
		}
		s.push(sum % 10) ;
		carry = sum / 10 ;
	}
	
	ListNode *temp = new ListNode ;
	dummy = new ListNode ;
	p = dummy ;
	while(!s.empty()) {
		temp = new ListNode ;
		temp->val = s.top() ;
		temp->next = NULL ;
		s.pop() ;
		p->next = temp ;
		p = temp ;
	}
	
	p = new ListNode ;
	temp = new ListNode ;
	delete p ;
	delete temp ;
	
	return dummy->next ;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/*class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1) return l2 ;
        if(!l2) return l1 ;

        stack<int> s1 ;
        while(l1) {
            s1.push(l1->val) ;
            l1 = l1->next ;
        }

        stack<int> s2 ;
        while(l2) {
            s2.push(l2->val) ;
            l2 = l2->next ;
        }

        stack<int> s ;
        int carry = 0 ;
        while(!s1.empty() || !s2.empty() || carry) {
            int sum = carry ;
            if(!s1.empty()) {
                sum += s1.top() ;
                s1.pop() ;
            }
            if(!s2.empty()) {
                sum += s2.top() ;
                s2.pop() ;
            }
            s.push(sum % 10) ;
            carry = sum / 10 ;
        }

        ListNode *dummy = new ListNode() ;
        ListNode *p = dummy ;

        while(!s.empty()) {
            p->next = new ListNode(s.top()) ;
            s.pop() ;
            p = p->next ;
        }

        return dummy->next ;
    }
};*/

int main() {
	ListNode *result ;
	ListNode *l1, *l2, *u, *s ;
	
	cout << endl ;
	cout << "  ADD TWO NUMBERS II " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^" << endl ;	
	
	/* .......TEST CASE 1....... */
	l1 = new ListNode ;
	l1->val = 7 ; l1->next = NULL ;
	s = l1 ;	
	u = new ListNode ;
	u->val = 2 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	u = new ListNode ;
	u->val = 4 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	u = new ListNode ;
	u->val = 3 ;   u->next = NULL ;   s->next = u ;   s = u ;
	l2 = new ListNode ;
	l2->val = 5 ; l2->next = NULL ;
	s = l2 ;
	u = new ListNode ;
	u->val = 6 ;   u->next = NULL ;   s->next = u ;   s = u ;
	u = new ListNode ;
	u->val = 4 ;   u->next = NULL ;   s->next = u ;   s = u ;
	
	/* .......TEST CASE 2....... */
	// l1 = new ListNode ;
	// l1->val = 2 ; l1->next = NULL ;
	// s = l1 ;	
	// u = new ListNode ;
	// u->val = 4 ;   u->next = NULL ;   s->next = u ;   s = u ;	
	// u = new ListNode ;
	// u->val = 3 ;   u->next = NULL ;   s->next = u ;   s = u ;
	// l2 = new ListNode ;
	// l2->val = 5 ; l2->next = NULL ;
	// s = l2 ;	
	// u = new ListNode ;
	// u->val = 6 ;   u->next = NULL ;   s->next = u ;   s = u ;
	// u = new ListNode ;
	// u->val = 4 ;   u->next = NULL ;   s->next = u ;   s = u ;
	
	/* .......TEST CASE 3....... */
	// l1 = new ListNode ;
	// l1->val = 0 ; l1->next = NULL ;
	// l2 = new ListNode ;
	// l2->val = 0 ; l2->next = NULL ;
	
	/* .......TEST CASE 4....... */
	// l1 = new ListNode ;
	// l1 = NULL ;
	// l2 = new ListNode ;
	// l2->val = 1 ; l2->next = NULL ;
	
	/* .......TEST CASE 5....... */
	// l1 = new ListNode ;
	// l1->val = 2 ; l1->next = NULL ;
	// l2 = new ListNode ;
	// l2 = NULL ;
	
	cout << endl << "Input.....\n" ;
	disp(l1) ;
	disp(l2) ;
	
	result = addTwoNumbers(l1, l2) ;
	
	cout << endl << "Output.....\n" ;
	disp(result) ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



// if(sum > 9) {
			// s.push(sum % 10) ;
			// carry = sum / 10 ;
		// }
		// else {
			// s.push(sum) ;
			// carry = 0 ;
		// }