
/*
	version 0
	一开始写得暴力的  然后学会了这一招，单调栈  O（n）的时间！！！！
*/



class Solution {
public:
	vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
		stack<int> s;
		map<int, int> m;
		int len = nums2.size();
		for (int i = 0;i < len;i++) {
			while (!s.empty() && s.top() < nums2[i]) {
				m[s.top()] = nums2[i];
				s.pop();
			}
			s.push(nums2[i]);
		}

		len = nums1.size();
		vector<int> res;
		for (int i = 0;i < len;i++)
			res.push_back(m.count(nums1[i]) ? m[nums1[i]] : -1);
		return res;
	}
};


