
/*
	version 0
	执行用时 16ms
	内存消耗 13.9MB
	广度优先搜索
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
	vector<vector<int>> levelOrderBottom(TreeNode* root) {
		vector<vector<int>> res;
		struct mystruct
		{
			TreeNode* rot;
			int depth;
		};
		mystruct q;
		q.depth = 0;
		q.rot = root;
		queue<mystruct> que;
		que.push(q);
		vector<int> temp;
		int nowdepth = 0;
		while (!que.empty()) {
			mystruct t = que.front();
			if (t.depth != nowdepth) {
				res.push_back(temp);
				nowdepth++;
				temp.clear();
				continue;
			}
			que.pop();
			if (t.rot != NULL) {
				mystruct left, right;
				left.rot = t.rot->left;
				right.rot = t.rot->right;
				left.depth = nowdepth + 1;
				right.depth = nowdepth + 1;
				que.push(left);
				que.push(right);
				temp.push_back(t.rot->val);
			}
		}
		reverse(res.begin(), res.end());
		return res;
	}
};




