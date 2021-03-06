
/*
	version 0
	周期性   f(x+t)=f(x) 即 s[i%t] == s[i]
*/





class Solution {
public:
	bool repeatedSubstringPattern(string s) {
		int len = s.length();
		int i = 0;
		for (int t = 1;t <= len / 2;t++) {
			if (len%t)
				continue;
			for (i = t;i < len&&s[i%t] == s[i];i++);
			if (i == len)
				return true;
		}
		return false;
	}
};



