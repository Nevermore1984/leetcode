
/*
	version 0
	执行用时 20ms
	内存消耗 9.1MB
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
	ListNode * deleteDuplicates(ListNode* head) {
		ListNode *p = head;
		while (p&&p->next) {
			if (p->val == p->next->val)
				p->next = p->next->next;
			else
				p = p->next;

		}
		return head;
	}
};




