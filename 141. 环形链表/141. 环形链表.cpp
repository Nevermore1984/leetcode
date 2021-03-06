
/*
	version 0
	执行用时 16ms
	内存消耗 9.8MB
	快慢指针，有意思
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
	bool hasCycle(ListNode *head) {
		ListNode *slowrunner;
		ListNode *fastrunner;

		if (head == NULL || head->next == NULL)
			return false;
		slowrunner = head;
		fastrunner = head->next;
		while (slowrunner != fastrunner) {
			if (fastrunner == NULL || fastrunner->next == NULL)
				return false;
			slowrunner = slowrunner->next;
			fastrunner = fastrunner->next->next;
		}
		return true;
	}
};

