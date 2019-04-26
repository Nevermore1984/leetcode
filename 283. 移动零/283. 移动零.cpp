
/*
	version 0
	执行用时 24ms
	内存消耗 9.7MB
	一开始没看到要保持顺序，用了头尾指针。。。。。。。。。
*/




class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		int leng = nums.size();
		if (leng < 2)
			return;
		int zerocount = 0;
		for (int i = 0;i < leng;i++)
			if (nums[i] == 0)
				zerocount++;
			else if (zerocount > 0) {
				nums[i - zerocount] = nums[i];
				nums[i] = 0;
			}
	}
};




