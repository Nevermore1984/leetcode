
/*
	version 0
	执行用时 40ms
	内存消耗 11MB
*/



class Solution {
public:
	int majorityElement(vector<int> &nums) {
		int res = nums[0];
		int lenth = nums.size();
		int count = 1;
		for (int i = 1;i < lenth;i++)
			if (nums[i] == res)
				count++;
			else {
				count--;
				if (count == 0)
					res = nums[i + 1];
			}
			return res;
	}
};

