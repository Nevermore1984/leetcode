
/*
	version 0
	执行用时 8ms
	内存消耗 8.6MB
*/

class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		if (nums.empty())
			return 0;
		int leftp = 0;
		int rightp = nums.size() - 1;
		while (true) {
			while (leftp < nums.size() && nums[leftp] != val)
				leftp++;
			while (nums[rightp] == val && leftp != rightp)
				rightp--;
			if (leftp != rightp&&leftp<nums.size()) {
				int t = nums[leftp];
				nums[leftp] = nums[rightp];
				nums[rightp] = t;
			}
			else
				return leftp;
		}
	}
};
