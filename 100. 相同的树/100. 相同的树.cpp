
/*
	version 0
	执行用时 8ms
	内存消耗 9.7MB
	树的前序遍历
*/



/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	bool isSameTree(TreeNode* p, TreeNode* q) {
		return PreTraverse(p, q);
	}
private:
	bool PreTraverse(TreeNode* p, TreeNode* q) {
		if (p != NULL && q != NULL) {
			if (p->val != q->val)
				return false;
			if (!PreTraverse(p->left, q->left))
				return false;
			if (!PreTraverse(p->right, q->right))
				return false;
		}
		if (p != NULL && q == NULL)
			return false;
		if (q != NULL && p == NULL)
			return false;
		return true;
	}
};



