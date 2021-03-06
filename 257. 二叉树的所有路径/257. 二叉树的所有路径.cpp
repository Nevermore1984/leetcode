
/*
	version 0
	执行用时 16ms
	内存消耗 11.9MB
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
	vector<string> binaryTreePaths(TreeNode*root) {
		vector<string> res;
		dfs(root, "", res);
		return res;
	}
	void dfs(TreeNode * root, string cur, vector<string> & res) {
		if (root == NULL)
			return;
		cur += to_string(root->val);
		if (root->left == NULL && root->right == NULL) {
			res.push_back(cur);
			return;
		}
		if (root->left != NULL)
			dfs(root->left, cur + "->", res);
		if (root->right != NULL);
		dfs(root->right, cur + "->", res);
	}
};



