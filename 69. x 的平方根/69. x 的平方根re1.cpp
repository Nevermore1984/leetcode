
/*
	version 1
	执行用时 12ms
	内存消耗 7.9MB
	牛顿迭代法
*/



class Solution {
public:
	int mySqrt(int x) {
		if (x <= 1)
			return x;
		double temp;
		double r = x;
		while (r - (temp = x / r)>0.00001)
			r = (r + temp) / 2;
		return (int)r;
	}
};


