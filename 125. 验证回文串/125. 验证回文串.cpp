
/*
	version 0
	执行用时 16ms
	内存消耗 9.3MB
*/



class Solution {
public:
	bool isPalindrome(string s) {
		int i = 0, j = s.size() - 1;
		while (i < j)
		{
			while (i < j && !isdigit(s[i]) && !isalpha(s[i]))
				i++;
			while (i < j && !isdigit(s[j]) && !isalpha(s[j]))
				j--;
			if (i < j && tolower(s[i]) != tolower(s[j]))
				return false;
			i++;
			j--;
		}
		return true;
	}
};



