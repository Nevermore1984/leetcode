
/*
	version 0
	一开始想的就是 map+排序
	但是忘了map的特性
	map以模板(泛型)方式实现，可以存储任意类型的数据，包括使用者自定义的数据类型。Map主要用于资料一对一映射(one-to-one)的情況，
	map內部的实现自建一颗红黑树，这颗树具有对数据自动排序的功能。在map内部所有的数据都是有序的
	参考链接：https://blog.csdn.net/sevenjoin/article/details/81943864
*/





class Solution {
public:
	vector<string> findRelativeRanks(vector<int>& nums) {
		int len = nums.size();
		int i = 1;
		vector<string> ans(len);
		vector<string> medal = { "Gold Medal","Silver Medal","Bronze Medal" };
		map<int, int> scoreIndex;
		for (int j = 0;j < len;j++)
			scoreIndex.insert(make_pair(nums[j], j));
		auto it = scoreIndex.rbegin();
		for (;i <= 3 && i <= len;i++, it++)
			ans[it->second] = medal[i - 1];
		for (;it != scoreIndex.rend();i++, it++)
			ans[it->second] = to_string(i);
		return ans;
	}
};


