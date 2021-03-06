
/*
	version 0
	执行用时 16ms
	内存消耗 14.5MB
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
	bool isSymmetric(TreeNode* root) {
		if (root == NULL)
			return true;
		return traverse(root->left, root->right);
	}
private:
	bool traverse(TreeNode* p, TreeNode* q) {
		if (p == NULL && q == NULL)
			return true;
		if (p == NULL || q == NULL)
			return false;
		return (p->val == q->val) && traverse(p->left, q->right) && traverse(p->right, q->left);
	}
};


