
/*
	version 0
	n-1个数同时加一，就好比每次有一个数自身减一，因为只能做减法，所以数组最后的数只能是最小值。这样的话每个元素减去最小值求其和就是答案。
*/





class Solution {
public:
	int minMoves(vector<int>& nums) {
		long long len = nums.size();
		long long minn = INT_MAX;
		long long res = 0;
		for (int i = 0;i < len;i++) {
			res += nums[i];
			if (minn > nums[i])
				minn = nums[i];
		}
		return res - minn * len;
	}
};


