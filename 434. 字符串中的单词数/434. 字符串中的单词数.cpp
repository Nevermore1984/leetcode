
/*
	version 0

*/




class Solution {
public:
	int countSegments(string s) {
		int i = 0, count = 0;
		int length = s.length();
		while (i < length) {
			while (i < length && s[i] == ' ') i++;
			if (i < length) count++;
			while (i < length && s[i] != ' ') i++;
		}
		return count;
	}
};



