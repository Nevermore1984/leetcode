
/*
	version 0
	执行用时 16ms
	内存消耗 9.1MB
	迭代
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
		ListNode* pre = NULL;
		ListNode* curr = head;
		ListNode* temp = NULL;
		while (curr) {
			temp = curr->next;
			curr->next = pre;
			pre = curr;
			curr = temp;
		}
		return pre;
	}
};

