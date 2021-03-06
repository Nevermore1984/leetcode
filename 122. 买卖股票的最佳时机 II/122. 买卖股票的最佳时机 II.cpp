
/*
	version 0
	执行用时 12ms
	内存消耗 9.6MB
	双指针+贪心
*/




class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int res = 0;
		int buy = 0;
		int sell = 1;
		int lenth = prices.size();
		while (sell < lenth) {
			if (prices[buy] > prices[sell])
				buy = sell++;
			else if (sell + 1 < lenth)
				if (prices[sell + 1] <= prices[sell]) {
					res += prices[sell] - prices[buy];
					buy = sell + 1;
					sell += 2;
				}
				else
					++sell;
			else
				res += prices[sell++] - prices[buy];
		}
		return res;
	}
};



