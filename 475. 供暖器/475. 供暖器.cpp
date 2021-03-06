
/*
	version 0

	注意第二个while里的等于号  很关键 ！！！！！
*/



class Solution {
public:
	int findRadius(vector<int>& houses, vector<int>& heaters) {
		sort(houses.begin(), houses.end());
		sort(heaters.begin(), heaters.end());
		int houlen = houses.size();
		int healen = heaters.size();
		int res = 0;
		int i = 0;
		int j = 0;
		while (j < houlen) {
			while (i + 1 < healen&&abs(houses[j] - heaters[i]) >= abs(houses[j] - heaters[i + 1]))
				i++;
			res = max(res, abs(houses[j] - heaters[i]));
			j++;
		}
		return res;
	}
};



