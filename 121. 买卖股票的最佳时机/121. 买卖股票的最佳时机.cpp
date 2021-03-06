
/*
	version 0
	执行用时 12ms
	内存消耗 9.4MB
*/




class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int left = 0, right = 1;
		int res = 0;
		if (prices.empty() || prices.size() < 2)
			return 0;
		while (right < prices.size()) {
			if (prices[right] > prices[left]) {
				res = max(res, prices[right++] - prices[left]);
			}
			else
				left = right++;
		}
		return res;
	}
};



