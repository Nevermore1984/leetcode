
/*
	version 1
	执行用时 8ms
	内存消耗 9.5MB
	和version0的方法相同，简化了代码
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
		if (q == NULL && p == NULL)
			return true;
		if (q == NULL || p == NULL)
			return false;
		return (q->val == p->val) && isSameTree(p->left, q->left) && isSameTree(q->right, p->right);
	}
};



