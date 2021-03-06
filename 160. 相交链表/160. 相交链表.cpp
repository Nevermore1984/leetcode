
/*
	version 0
	执行用时 72ms
	内存消耗 16.6MB
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
	ListNode * getIntersectionNode(ListNode*headA, ListNode*headB) {
		int alenth = 0, blenth = 0;
		ListNode *p;
		p = headA;
		while (p) {
			alenth++;
			p = p->next;
		}
		p = headB;
		while (p) {
			blenth++;
			p = p->next;
		}
		if (alenth > blenth)
			for (int i = 0;i < alenth - blenth;i++)
				headA = headA->next;
		if (blenth > alenth)
			for (int i = 0;i < blenth - alenth;i++)
				headB = headB->next;
		while (headA != NULL) {
			if (headA == headB)
				return headA;
			headA = headA->next;
			headB = headB->next;
		}
		return NULL;
	}
};



