
/*
	version 0
	一开始把left和right设成全局变量  然后怎么算怎么少点儿
	搞了10多分钟 才发现问题  我对递归还是不够了解呀。。。。。。
*/




struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	int res = 0;
	int maxdep(TreeNode* root, int depth) {
		if (!root)
			return depth;
		depth++;
		int left = maxdep(root->left,0);
		int right = maxdep(root->right,0);
		res = max(left + right, res);
		return max(left, right)+depth;
	}
	int diameterOfBinaryTree(TreeNode* root) {
		maxdep(root, 0);
		return res;
	}
};




