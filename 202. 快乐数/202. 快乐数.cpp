
/*
	version 0
	执行用时 12ms
	内存消耗 7.9MB
	多写几个例子找规律
*/




class Solution {
public:
	bool isHappy(int n) {
		bool res = true;
		while (res) {
			int temp = 0;
			while (n > 0) {
				temp += (n % 10)*(n % 10);
				n /= 10;
			}
			if (temp == 1)
				break;
			if (temp == 4 || temp == 16 || temp == 58 || temp == 89 || temp == 145 || temp == 42 || temp == 20)
				res = false;
			n = temp;
		}
		return res;
	}
};



