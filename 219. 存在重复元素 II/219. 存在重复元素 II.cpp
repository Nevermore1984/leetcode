
/*
	version 0
	执行用时 72ms
	内存消耗 15.2MB
*/






class Solution {
public:
	bool containsNearbyDuplicate(vector<int>& nums, int k) {
		if (nums.empty())
			return false;
		unordered_map<int, int> map;
		for (int i = 0; i < nums.size(); i++)
			if (map.find(nums[i]) == map.end())
				map[nums[i]] = i;
			else {
				int idx = map[nums[i]];
				map[nums[i]] = i;
				if (i - idx <= k) 
					return true;
			}
			return false;
	}
};






