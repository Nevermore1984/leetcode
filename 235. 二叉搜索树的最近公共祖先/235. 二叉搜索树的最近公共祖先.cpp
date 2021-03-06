
/*
	version 0
	执行用时 60ms
	内存消耗 25.7MB
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
	TreeNode * lowestCommonAncestor(TreeNode* root, TreeNode*p, TreeNode* q) {
		int valp = p->val;
		int valq = q->val;
		int t = 0;
		while (true) {
			t = root->val;
			if (root == NULL)
				return NULL;
			if (t == valp)
				return p;
			if (t == valq)
				return q;
			if ((t > valq&&t < valp) || (t > valp&&t < valq))
				return root;
			if (t < valq&&t < valp)
				root = root->right;
			if (t > valq&&t > valp)
				root = root->left;
		}
		return NULL;
	}
};





