
/*
	version 0
	二叉搜索树的中序遍历是有序的  前面刚遇到
*/




struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	void findit(TreeNode* root, TreeNode *& pre, int& res) {
		if (!root)
			return;
		findit(root->left, pre, res);
		if (pre)
			if (res > root->val - pre->val)
				res = root->val - pre->val;
		pre = root;
		findit(root->right, pre, res);
	}

	int getMinimumDifference(TreeNode* root) {
		int res = INT_MAX;
		TreeNode * pre = NULL;
		findit(root, pre, res);
		return res;
	}
};



