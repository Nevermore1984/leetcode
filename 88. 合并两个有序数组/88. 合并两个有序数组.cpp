
/*
	version 0
	执行用时 12ms
	内存消耗 8.6MB
*/







class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		for (int i = 0;i < n;i++)
			nums1[i + m] = nums2[i];
		sort(nums1.begin(), nums1.begin() + m + n);
	}
};





