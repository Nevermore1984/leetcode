
/*
	version 0
	执行用时 16ms
	内存消耗 8.7MB
*/

/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
class Solution {
public:
	ListNode * mergeTwoLists(ListNode* l1, ListNode* l2) {
		ListNode *head = new ListNode(0);
		ListNode *p;
		p = head;
		while (l1 != NULL && l2 != NULL)
			if (l1->val <= l2->val) {
				p->next = l1;
				l1 = l1->next;
				p = p->next;
			}
			else {
				p->next = l2;
				l2 = l2->next;
				p = p->next;
			}
			if (l1 == NULL)
				p->next = l2;
			else
				p->next = l1;
			return head->next;
	}
};
