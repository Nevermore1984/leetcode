
/*
	version 0
	执行用时 36ms
	内存消耗 11.3MB
*/







class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		int len = nums.size();
		if (len < 2)
			return false;
		for (int i = 1;i < len;i++)
			if (nums[i] == nums[i - 1])
				return true;
		return false;
	}
};


