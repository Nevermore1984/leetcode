
/*
	version 0
	执行用时 24ms
	内存消耗 9.3MB
	改成引用
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
		return res;
	}
	ListNode* reverse(ListNode* head, ListNode* &res) {
		if (head->next == NULL) {
			res = head;
			return head;
		}
		reverse(head->next, res)->next = head;
		head->next = NULL;
		return head;
	}
};

