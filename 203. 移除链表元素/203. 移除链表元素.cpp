
/*
	version 0
	执行用时 76ms
	内存消耗 11.2MB
	代码摘自热评，虽然这里递归不实用，但是这代码看起来好舒服啊啊啊啊啊啊啊！！！！！！不贴自己的了
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
	ListNode * removeElements(ListNode *head, int val)
	{
		if (!head)
			return head;
		head->next = removeElements(head->next, val);
		return head->val == val ? head->next : head;
	}
};

