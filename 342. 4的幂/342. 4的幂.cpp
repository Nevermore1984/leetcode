
/*
	version 0
	执行用时 8ms
	内存消耗 8.3MB
	先判断是不是2的幂
	然后判断是不是4的幂
*/



class Solution {
public:
	bool isPowerOfFour(int num) {
		if ((num > 0) && (num&-num) == num)
			return num % 3 == 1;
		    //return num & 0x55555555;  方法2
		return false;
	}
};



