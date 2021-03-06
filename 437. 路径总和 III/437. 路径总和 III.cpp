
/*
	version 0
	一开始想了个bfs会出现重复，又想了个递归也有重复，唉
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
	int res = 0;
	int pathSum(TreeNode* root, int sum) {
		if (root == NULL)
			return 0;
		psum(root, sum);
		pathSum(root->left, sum);
		pathSum(root->right, sum);
		return res;
	}
	void psum(TreeNode* root, int sum) {
		if (root == NULL)
			return;
		sum -= root->val;
		if (sum == 0)
			res++;
		psum(root->left, sum);
		psum(root->right, sum);
	}
};

int main() {
	return 0;
}

