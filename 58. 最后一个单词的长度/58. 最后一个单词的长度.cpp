
/*
	version 0
	执行用时 12ms
	内存消耗 8.6MB
*/

class Solution {
public:
	int lengthOfLastWord(string s) {
		int len = s.length();
		int res = 0;
		for (int i = len - 1;i >= 0;i--)
			if (s[i] != ' ')
				break;
			else
				len = i;
		for (int i = len - 1;i >= 0;i--)
			if (s[i] != ' ')
				res++;
			else
				break;
		return res;
	}
};



