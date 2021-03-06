
/*
	version 0

	敲黑板！！！划重点！！！
	二叉搜索树的中序遍历是一个升序序列！
	二叉搜索树的中序遍历是一个升序序列！
	二叉搜索树的中序遍历是一个升序序列！


	用的评论区的思路和变量名 然后自己码了一遍
	当时在想怎么不使用额外空间时，想法居然和这个的方法一模一样，但是想求众数的方法就很僵硬
	然后 看了一句话，豁然开朗
	二叉搜索树的中序遍历是一个升序序列！
*/






struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	void inOrder(TreeNode* root, TreeNode*& pre, int& curTimes,
		int& maxTimes, vector<int>& res) {
		if (!root)
			return;
		inOrder(root->left, pre, curTimes, maxTimes, res);
		if (pre)
			if (pre->val == root->val)
				curTimes++;
			else
				curTimes = 1;
		if (curTimes == maxTimes)
			res.push_back(root->val);
		if (curTimes > maxTimes) {
			res.clear();
			maxTimes = curTimes;
			res.push_back(root->val);
		}
		pre = root;
		inOrder(root->right, pre, curTimes, maxTimes, res);
	}
	vector<int> findMode(TreeNode* root) {
		vector<int> res;
		if (!root) return res;
		TreeNode* pre = NULL;
		int curTimes = 1, maxTimes = 0;
		inOrder(root, pre, curTimes, maxTimes, res);
		return res;
	}
};



