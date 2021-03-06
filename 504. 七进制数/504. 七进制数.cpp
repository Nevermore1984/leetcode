
/*
	version 0

*/



class Solution {
public:
	string convertToBase7(int num) {
		string res = "";
		if (num == 0)
			return "0";
		else if (num > 0) {
			while (num != 0) {
				res = to_string(num % 7) + res;
				num /= 7;
			}
		}
		else
			res = "-" + convertToBase7(-num);
		return res;
	}
};


