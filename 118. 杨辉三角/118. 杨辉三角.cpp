
/*
	version 0
	执行用时 12ms
	内存消耗 8.6MB
*/


class Solution {
public:
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>> res;
		vector<int> temp;
		for (int i = 0;i < numRows;i++) {
			for (int j = 0;j <= i;j++) {
				if (j == 0 || j == i)
					temp.push_back(1);
				else
					temp.push_back(res[i-1][j-1]+res[i-1][j]);
			}
			res.push_back(temp);
			temp.clear();
		}
		return res;
	}
};

