
/*
	version 0
	执行用时 16ms
	内存消耗 8.6MB
*/

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		if (!strs.empty()) {
			if (strs.size() < 2)
				return strs[0];
			else {
				int len;
				for (len = 1;len <= strs[0].length();len++) {
					if (strs[0].compare(0, len, strs[1], 0, len) != 0)
						break;
				}
				len--;
				if (len == 0)
					return "";
				for (int i = 1;i < strs.size();i++) {
					while (strs[i - 1].compare(0, len, strs[i], 0, len) != 0) {
						len--;
						if (len == 0)
							return "";
					}
				}
				return strs[0].substr(0, len);
			}
		}
		else {
			return "";
		}
	}
};



