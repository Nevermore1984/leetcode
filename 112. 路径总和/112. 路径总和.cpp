
/*
	version 0
	执行用时 28ms
	内存消耗 20MB
	和111一模一样的bfs
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
	bool hasPathSum(TreeNode* root, int sum) {
		struct mystruct {
			TreeNode* root;
			int sum = 0;
		}head;
		queue<mystruct> myq;
		if (root) {
			head.root = root;
			head.sum += root->val;
			myq.push(head);
			while (!myq.empty()) {
				mystruct head = myq.front();
				myq.pop();
				if (head.root->left == NULL && head.root->right == NULL)
					if (head.sum == sum)
						return true;
				if (head.root->left) {
					mystruct temp;
					temp.root = head.root->left;
					temp.sum = head.sum + head.root->left->val;
					myq.push(temp);
				}
				if (head.root->right) {
					mystruct temp;
					temp.root = head.root->right;
					temp.sum = head.sum + head.root->right->val;
					myq.push(temp);
				}
			}
		}
		return false;
	}
};

