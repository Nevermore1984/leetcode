
/*
	version 0
	执行用时 36ms
	内存消耗 21.1MB
	简单递归
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
	TreeNode * sortedArrayToBST(vector<int>& nums) {
		if (nums.empty())
			return NULL;
		return bst(nums, 0, nums.size() - 1);
	}
	TreeNode * bst(vector<int>& nums, int left, int right) {
		int mid = (left + right) / 2;
		TreeNode* head=new TreeNode(nums[mid]);
		if (left != right) {
			if (mid == left) {
				TreeNode *rightnode = new TreeNode(nums[left + 1]);
				head->right = rightnode;
				head->left = NULL;
			}
			else {
				head->left = bst(nums, left, mid - 1);
				head->right = bst(nums, mid + 1, right);
			}
		}
		return head;
	}
};

