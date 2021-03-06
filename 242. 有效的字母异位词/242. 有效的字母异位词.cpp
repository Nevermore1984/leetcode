
/*
	version 0
	执行用时 16ms
	内存消耗 9.3MB
*/



class Solution {
public:
	bool isAnagram(string s, string t) {
		int len = s.length();
		if (len != t.length())
			return false;
		int record[26] = { 0 };
		for (int i = 0;i < len;i++)
			record[s[i] - 'a']++;
		for (int i = 0;i < len;i++)
			record[t[i] - 'a']--;
		for (int i = 0;i < 26;i++)
			if (record[i] != 0)
				return false;
		return true;
	}
};


