
/*
	version 0
	执行用时 8ms
	内存消耗 8MB
*/



class Solution {
public:
	bool isUgly(int num) {
		if (num <= 0)
			return false;
		while (num % 2 == 0)
			num /= 2;
		while (num % 3 == 0)
			num /= 3;
		while (num % 5 == 0)
			num /= 5;
		if (num == 1)
			return true;
		return false;
	}
};




