
/*
	version 0
	执行用时 36ms
	内存消耗 19.3MB
	递归
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
	int maxDepth(TreeNode* root) {
		if (root == NULL)
			return 0;
		int left = maxDepth(root->left) + 1;
		int right = maxDepth(root->right) + 1;
		return max(left, right);
	}
};



