
/*
	version 0
	执行用时 76ms
	内存消耗 8.2MB
	3的幂只能是3的幂
*/




class Solution {
public:
	bool isPowerOfThree(int n) {
		return n > 0 && 1162261467 % n == 0;
	}
};





