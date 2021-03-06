
/*
	version 1
	执行用时 12ms
	内存消耗 8.8MB
*/


class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		if (!strs.empty()) {
			int len = strs[0].length();
			for (int i = 1;i < strs.size();i++) {
				while (strs[i - 1].compare(0, len, strs[i], 0, len) != 0) {
					len--;
					if (len == 0)
						return "";
				}
			}
			return strs[0].substr(0, len);
		}
		return "";
	}
};



