
/*
	version 0
	执行用时 16ms
	内存消耗 8.2MB
*/






class Solution {
public:
	int titleToNumber(string s) {
		long long res = 0;
		int lenth = s.size();
		for (int i = 0;i < lenth;i++)
			res = res * 26 + s[i] - 'A' + 1;
		return res;
	}
};






