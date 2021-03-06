
/*
	version 2
	执行用时 8ms
	内存消耗 8.5MB

	斐波那契数列迭代
*/


class Solution {
public:
	int climbStairs(int n) {
		int *dp = new int[n + 2];
		dp[1] = 1;
		dp[2] = 2;
		for (int i = 3;i <= n;i++)
			dp[i] = dp[i - 1] + dp[i - 2];
		return dp[n];
	}
};

