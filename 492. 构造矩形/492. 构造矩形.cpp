
/*
	version 0
	当做法跟评论区一样，就感觉很舒服，就很爽
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


