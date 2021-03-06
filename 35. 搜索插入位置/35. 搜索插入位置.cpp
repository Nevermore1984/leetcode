
/*
	version 0
	执行用时 12ms
	内存消耗 8.8MB
	二分查找
*/



class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int low = 0;
		int high = nums.size() - 1;
		int mid = 0;
		while (low <= high) {
			mid = (low + high) / 2;
			if (nums[mid] > target)
				high = mid - 1;
			else if (nums[mid] == target)
				return mid;
			else
				low = mid + 1;
		}
		return low;
	}
};



