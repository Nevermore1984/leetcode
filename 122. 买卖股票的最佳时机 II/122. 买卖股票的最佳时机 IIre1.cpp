
/*
	version 1
	执行用时 12ms
	内存消耗 9.4MB
	贪心
*/



class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int res = 0;
		int lenth = prices.size();
		for (int i = 1;i < lenth;i++)
			if (prices[i] > prices[i - 1])
				res += prices[i] - prices[i - 1];
		return res;
	}
};


