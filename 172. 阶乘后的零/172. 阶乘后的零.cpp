
/*
	version 0
	执行用时 12ms
	内存消耗 8.2MB
*/



class Solution {
public:
	int trailingZeroes(int n) {
		int res = 0;
		int temp;
		while (n) {
			temp = n / 5;
			res += temp;
			n = temp;
		}
		return res;
	}
};
