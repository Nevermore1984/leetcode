
/*
	version 0
	执行用时 20ms
	内存消耗 9.5MB
	异或！！！！！
*/




class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int res = 0;
		int lenth = nums.size();
		for (int i = 0;i < lenth;i++)
			res ^= nums[i];
		return res;
	}
};

