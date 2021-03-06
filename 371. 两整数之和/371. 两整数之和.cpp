
/*
	version 0
	a^b是无进位的二进制相加，a&b是二进制的进位
*/



class Solution {
public:
	int getSum(int a, int b) {
		return ((unsigned int)a & b) << 1 == 0 ? a ^ b : getSum(a ^ b, ((unsigned int)a & b) << 1);
	}
};



