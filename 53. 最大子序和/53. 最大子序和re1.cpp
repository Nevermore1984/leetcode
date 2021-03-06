
/*
	version 1
	执行用时 20ms
	内存消耗 9.3MB
	dp动态规划
*/



class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int len = nums.size();
		int *dp=new int[len+1];
		dp[0] = nums[0];
		for (int i = 1;i < len;i++)
			dp[i] = max(dp[i - 1] + nums[i], nums[i]);
		int maxn = nums[0];
		for (int i = 1;i < len;i++)
			maxn = max(maxn, dp[i]);
		return maxn;
	}
};



