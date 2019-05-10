
/*
	version 0

*/




class Solution {
public:
	vector<string> fizzBuzz(int n) {
		vector<string> res;
		string str;
		bool flag;
		for (int i = 1;i <= n;i++) {
			str = "";
			flag = true;
			if (i % 3 == 0) {
				str += "Fizz";
				flag = false;
			}
			if (i % 5 == 0) {
				str += "Buzz";
				flag = false;
			}
			if (flag)
				res.push_back(to_string(i));
			else
				res.push_back(str);
		}
		return res;
	}
};


