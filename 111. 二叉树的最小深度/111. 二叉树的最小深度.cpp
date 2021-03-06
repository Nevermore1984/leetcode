
/*
	version 0
	执行用时 28ms
	内存消耗 19.3MB
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
	int minDepth(TreeNode* root) {
		struct mystruct {
			TreeNode* root;
			int depth;
		}head;
		queue<mystruct> myq;
		if (root) {
			head.root = root;
			head.depth = 1;
			myq.push(head);
			while (!myq.empty()) {
				mystruct head = myq.front();
				myq.pop();
				if (head.root->left == NULL && head.root->right == NULL)
					return head.depth;
				if (head.root->left) {
					mystruct temp;
					temp.root = head.root->left;
					temp.depth = head.depth + 1;
					myq.push(temp);
				}
				if (head.root->right) {
					mystruct temp;
					temp.root = head.root->right;
					temp.depth = head.depth + 1;
					myq.push(temp);
				}
			}
		}
		return 0;
	}
};

