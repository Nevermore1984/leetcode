
/*
	version 0
	执行用时 32ms
	内存消耗 9.8MB
*/


class Solution {
public:
	int missingNumber(vector<int>& nums) {
		int lenth = nums.size();
		int res = lenth;
		for (int i = 0;i < lenth;i++)
			res += (i - nums[i]);
		return res;
	}
};


