
/*
	version 0
	这样好慢啊  用stl这么慢的嘛？？？
*/







class Solution {
public:
	int findPairs(vector<int>& nums, int k) {
		if (k < 0)
			return 0;
		int res = 0;
		int len = nums.size();
		if (k != 0) {
			set<int> s;
			set<pair<int, int>> flag;


			for (int i = 0;i < len;i++)
				s.insert(nums[i]);
			for (int i = 0;i < len;i++)
				if (s.count(nums[i] + k)) {
					if (!flag.count(pair<int, int>(nums[i], nums[i] + k)) && !flag.count(pair<int, int>(nums[i] + k, nums[i]))) {
						res++;
						flag.insert(pair<int, int>(nums[i], nums[i] + k));
						flag.insert(pair<int, int>(nums[i] + k, nums[i]));
					}
				}
				else if (s.count(nums[i] - k))
					if (!flag.count(pair<int, int>(nums[i], nums[i] - k)) && !flag.count(pair<int, int>(nums[i] - k, nums[i]))) {
						res++;
						flag.insert(pair<int, int>(nums[i], nums[i] - k));
						flag.insert(pair<int, int>(nums[i] - k, nums[i]));
					}
		}
		else {
			set<int> s;
			set<int> flag;
			for (int i = 0;i < len;i++)
				if (s.count(nums[i]) && !flag.count(nums[i])) {
					res++;
					flag.insert(nums[i]);
				}
				else
					s.insert(nums[i]);
		}
		return res;
	}
};



