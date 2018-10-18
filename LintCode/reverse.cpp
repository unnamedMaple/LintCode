#include "Header.h"

ListNode * reverse(ListNode * head) {
	// write your code here
	if (head == NULL){
		return head;
	}
	ListNode *tail = head->next; 
	if (tail != NULL){
		int tmp = head->val;
		head->val = tail->val;
		tail->val = tmp;
	}
	while (tail != NULL && tail->next!=NULL){
		ListNode * tp= tail->next;

		tail->next = tp->next;
		tp->next = head;
		head = tp;

	}	
	return head;
}