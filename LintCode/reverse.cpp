#include "Header.h"
class ListNode {
	public:
		int val;
		ListNode *next;
		ListNode(int val) {
			this->val = val;
			this->next = NULL;
			
		}
		
};
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