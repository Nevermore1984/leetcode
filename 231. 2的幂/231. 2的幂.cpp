
/*
	version 0
	执行用时 8ms
	内存消耗 8MB
*/







class Solution {
public:
	bool isPowerOfTwo(int n) {
		return(n>0) && (n&-n) == n;//方法1
		//return (n>0) && (1<<30) % n == 0;//方法2
	}
};



