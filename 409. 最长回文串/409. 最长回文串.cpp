
/*
	version 0
	又是这个思路。。。。
*/




class Solution {
public:
	int longestPalindrome(string s) {
		int hash[123] = { 0 };
		int flag = 0;
		int result = 0;
		for (int i = 0; i < s.length();i++)
			hash[s[i]]++;
		for (int i = 0;i < 123;i++) {
			if (hash[i] % 2 == 0)
				result += hash[i];
			else {
				result += hash[i] - 1;
				flag = 1;
			}
		}
		if (flag == 1) 
			result++;
		return result;
	}
};



