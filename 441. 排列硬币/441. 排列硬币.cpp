
/*
	version 0
	还可以直接用数学式子算
*/





class Solution {
public:
	int arrangeCoins(int n) {
		int res = 0, now = 1;
		while (n >= now) {
			res++;
			n -= now;
			now++;
		}
		return res;
	}
};

