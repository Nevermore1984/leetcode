
/*
	version 0
	执行用时 52ms
	内存消耗 17.3MB
*/




class NumArray {
public:
	vector<int> sum;
	NumArray(vector<int>& nums) {
		int len = nums.size();
		int pre = 0;
		for (int i = 0;i < len;i++) {
			pre += nums[i];
			sum.push_back(pre);
		}
	}

	int sumRange(int i, int j) {
		if (i == 0)
			return sum[j];
		else
			return sum[j] - sum[i - 1];
	}
};

/**
* Your NumArray object will be instantiated and called as such:
* NumArray* obj = new NumArray(nums);
* int param_1 = obj->sumRange(i,j);
*/

