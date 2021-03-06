
/*
	version 0
	执行用时 28ms
	内存消耗 9.4MB
	递归   要注意两点（1）（2）
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
	ListNode * reverseList(ListNode* head) {
		if (!head)
			return head;
		ListNode* res=new ListNode(5);
		reverse(head, res);
		return res->next;
	}
	ListNode* reverse(ListNode* head, ListNode *res) {
		if (head->next == NULL) {
			res->next = head;//（1）
			return head;
		}
		reverse(head->next, res)->next = head;
		head->next = NULL;//（2）
		return head;
	}
};

