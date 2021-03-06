
/*
	version 0
	明天去打工
	打工是不可能打工的，。。。。。
*/







class Node {
public:
	int val;
	vector<Node*> children;

	Node() {}

	Node(int _val, vector<Node*> _children) {
		val = _val;
		children = _children;
	}
};

class Solution {
public:
	int maxDepth(Node* root) {
		if (!root)
			return 0;
		int max = 0;
		if (root->children.empty())
			return 1;
		int len = root->children.size();
		int t = 0;
		for (int i = 0;i < len;i++) {
			t = maxDepth(root->children[i]);
			if (max < t)
				max = t;
		}
		return max+1;

	}
};


