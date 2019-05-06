
/*
	version 1
	空间换时间，很常见了
*/




class Solution {
public:
	bool canConstruct(string ransomNote, string magazine) {
		int x[26] = { 0 };
		int y[26] = { 0 };
		for (auto i : ransomNote)
			x[i - 'a'] ++;
		for (auto i : magazine)
			y[i - 'a'] ++;
		for (int i = 0; i < 26; i++)
			if (x[i] > y[i])
				return false;
		return true;
	}
};


