
/*
	version 0
	执行用时 28ms
	内存消耗 17.1MB
*/



class Solution {
public:
	bool isBalanced(TreeNode* root) {
		bool flag = true;
		judgechild(root, flag);
		return flag;
	}
	int judgechild(TreeNode* root, bool& flag) {
		if (!root)
			return 0;
		int left = judgechild(root->left, flag);
		if (!flag)
			return -1;
		int right = judgechild(root->right, flag);
		if (!flag)
			return -1;
		if (abs(right - left) > 1) {
			flag = false;
			return -1;
		}
		return max(left, right) + 1;
	}
};



