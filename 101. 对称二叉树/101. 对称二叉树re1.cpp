
/*
	version 0
	执行用时 24ms
	内存消耗 14.9MB
	迭代
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
		queue<TreeNode*> q;
		q.push(root);
		q.push(root);
		while (!q.empty()) {
			TreeNode* t1 = q.front();
			q.pop();
			TreeNode* t2 = q.front();
			q.pop();
			if (t1 == NULL && t2 == NULL)
				continue;
			if (t1 == NULL || t2 == NULL)
				return false;
			if (t1->val != t2->val)
				return false;
			q.push(t1->left);
			q.push(t2->right);
			q.push(t1->right);
			q.push(t2->left);
		}
		return true;
	}
};



