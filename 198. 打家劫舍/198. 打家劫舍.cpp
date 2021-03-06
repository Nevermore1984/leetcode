
/*
	version 1
	执行用时 8ms
	内存消耗 8.5MB
	动态规划哦吼吼
*/


class Solution {
public:
	int rob(vector<int>& nums) {
		if (nums.empty())
			return 0;
		int lenth = nums.size();
		if (lenth == 1)
			return nums[0];
		if (lenth == 2)
			return max(nums[0], nums[1]);
		int *dp = new int[lenth];
		dp[0] = nums[0];
		dp[1] = max(nums[1], nums[0]);
		for (int i = 2;i < lenth;i++)
			dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
		return dp[lenth - 1];
	}
};

