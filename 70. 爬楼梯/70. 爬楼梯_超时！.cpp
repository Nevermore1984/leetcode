
/*
	version 0
	斐波那契数列
	超时！！！！！！！！
*/

class Solution {
public:
	int climbStairs(int n) {
		return climb(0, n);
	}
private:
	int climb(int i, int n) {
		if (i > n)
			return 0;
		if (i == n)
			return 1;
		else
			return climb(i + 1, n) + climb(i + 2, n);
	}
};
