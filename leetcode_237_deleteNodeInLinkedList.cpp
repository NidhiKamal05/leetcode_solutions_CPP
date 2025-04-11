
// 237. DELETE NODE IN A LINKED LIST

#include<iostream>

using namespace std ;

struct ListNode {
    int val ;
    ListNode *next ;
} ;

void deleteNode(ListNode *node){
    int temp ;
    temp = node->val ;
    node->val = node->next->val ;
    node->next->val = temp ;
    node->next = node->next->next ;
}