
/*
	version 0
	用的vs2017  这个return的位置我觉得有点奇怪啊  按理说应该和for对齐才对呀
*/




class Solution {
public:
	int findMaxConsecutiveOnes(vector<int>& nums) {
		int len = nums.size();
		int res = 0;
		int t = 0;
		for (int i = 0;i < len;i++)
			if (nums[i] == 1)
				t++;
			else {
				res = max(res, t);
				t = 0;
			}
			return max(res, t);
	}
};


