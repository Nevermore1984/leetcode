
/*
	version 0
	执行用时 20ms
	内存消耗 9.5MB
*/





class Solution {
public:
	vector<int> twoSum(vector<int>& numbers, int target) {
		vector<int> res;
		map<int, int> findme;
		int lenth = numbers.size();
		for (int i = 0;i < lenth;i++) {
			if (findme.find(numbers[i]) == findme.end())
				findme[target - numbers[i]] = i;
			else {
				res.push_back(findme[numbers[i]] + 1);
				res.push_back(i + 1);
				break;
			}
		}
		return res;
	}
};


