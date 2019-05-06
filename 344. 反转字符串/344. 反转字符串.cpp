
/*
	version 0
	
*/




class Solution {
public:
	void reverseString(vector<char> & s) {
		int length = s.size();
		int head = 0;
		int tail = length - 1;
		char t;
		while (head < tail) {
			t = s[head];
			s[head] = s[tail];
			s[tail] = t;
			head++;
			tail--;
		}
	}
};

