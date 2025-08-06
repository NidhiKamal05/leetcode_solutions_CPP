
// 2. ADD TWO NUMBERS

struct ListNode {
	int val ;
	ListNode *next ;
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	ListNode* dummy = new ListNode(0) ;
	ListNode* current = dummy ;
	int carry = 0 ;
	while(l1 || l2 || carry) {
		int a = l1 ? l1->val : 0 ;
		int b = l2 ? l2->val : 0 ;
		int sum = a + b + carry ;
		carry = sum / 10 ;
		current->next = new ListNode(sum % 10) ;
		current = current->next ;
		l1 = l1 ? l1->next : NULL ;
		l2 = l2 ? l2->next : NULL ;
	}
	ListNode* result = dummy->next ;
	delete dummy ;
	return result ;
}