
/*
	version 0
	执行用时 52ms
	内存消耗 9.5MB
	一开始采用移动数组的方法O（kn）的时间 但是超时了，看了评论才发现原来可以这样，注意k%lenth ！！！！
*/






class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		int lenth = nums.size();
		k %= lenth;
		reverse(nums.begin(),nums.end());
		reverse(nums.begin(), nums.begin() + k);
		reverse(nums.begin() + k, nums.end());
	}
};



