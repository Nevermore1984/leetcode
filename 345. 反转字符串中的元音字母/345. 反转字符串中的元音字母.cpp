
/*
	version 0

*/




class Solution {
public:
	string reverseVowels(string s) {
		int len = s.length();
		int head = 0;
		int tail = len - 1;
		char t;
		while (head < tail) {
			while (head < tail&&s[head] != 'a'&&s[head] != 'o'&&s[head] != 'e'&&s[head] != 'u'&&s[head] != 'i'&&s[head]!='A'&&s[head] != 'O'&&s[head] != 'E'&&s[head] != 'I'&&s[head] != 'U')
				head++;
			while (head < tail&&s[tail] != 'a'&&s[tail] != 'o'&&s[tail] != 'e'&&s[tail] != 'u'&&s[tail] != 'i'&&s[tail]!='A'&&s[tail] != 'O'&&s[tail] != 'E'&&s[tail] != 'I'&&s[tail] != 'U')
				tail--;
			t = s[head];
			s[head] = s[tail];
			s[tail] = t;
			head++;
			tail--;
		}
		return s;
	}
};



