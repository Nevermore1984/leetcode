
/*
	version 0
	执行用时 796ms
	内存消耗 9.2MB
	前缀和  暴力
*/

class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int len = nums.size();
		int *presum=new int[len+1];
		presum[0] = nums[0];
		for (int i = 1;i < len;i++)
			presum[i] = presum[i - 1] + nums[i];
		int maxn = presum[0];
		for (int i = 0;i < len;i++) {
			maxn = max(maxn, presum[i]);
			for (int j = i - 1;j >= 0;j--)
				maxn = max(maxn, presum[i] - presum[j]);
		}
		return maxn;
	}
};

