
/*
	version 0
	跟383还有前面一题一个方法
	感觉挺常见的在leetcode里
*/




class Solution {
public:
	int firstUniqChar(string s) {
		int pre[26] = {};
		for (const char &i : s) {
			pre[i - 'a']++;
		}
		for (int j = 0; j < s.length(); ++j) {
			if (pre[s[j] - 'a'] == 1) {
				return j;
			}
		}
		return -1;
	}
};


