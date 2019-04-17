
/*
	version 0
	执行用时 16ms
	内存消耗 9.1MB
*/





class Solution {
public:
	bool isIsomorphic(string s, string t) {
		int len = s.length();
		if (len == 0)
			return true;
		for (int i = 0;i < len;i++)
			if (s.find(s[i], i + 1) != t.find(t[i], i + 1))
				return false;
		return true;
	}
};




