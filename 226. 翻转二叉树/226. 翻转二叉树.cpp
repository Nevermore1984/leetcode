
/*
	version 0
	执行用时 8ms
	内存消耗 9.2MB
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
	TreeNode * invertTree(TreeNode* root) {
		if (!root)
			return NULL;
		TreeNode *tempr = root->right;
		TreeNode *templ = root->left;
		root->left = invertTree(tempr);
		root->right = invertTree(templ);
		return root;
	}
};


