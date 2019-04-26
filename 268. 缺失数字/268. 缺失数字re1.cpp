
/*
	version 0
	执行用时 32ms
	内存消耗 10MB
	偷看评论，感觉很妙，这样应该不会爆内存
*/



class Solution {
public:
	int missingNumber(vector<int>& nums) {
		int lenth = nums.size();
		int res = lenth;
		for (int i = 0;i < lenth;i++) {
			res ^= nums[i];
			res ^= i;
		}
		return res;
	}
};



