
/*
	version 0
	执行用时 4ms
	内存消耗 8.1MB
	-65总是忘了
*/






class Solution {
public:
	string convertToTitle(int n) {
		string res;
		while (n-- != 0) {
			res += (n % 26) + 65;
			n /= 26;
		}
		reverse(res.begin(), res.end());
		return res;
	}
};







