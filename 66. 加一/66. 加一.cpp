
/*
	version 0
	执行用时 8ms
	内存消耗 8.3MB
*/



class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		int len = digits.size() - 1;
		for (int i = len; i >= 0; i--) {
			if (digits[i] < 9) {
				digits[i]++;
				return digits;
			}
			digits[i] = 0;
		}
		for (int i = 0; i < digits.size(); ++i) {
			digits[i] = 0;
		}
		digits.insert(digits.begin(), 1);
		return digits;
	}
};




