
/*
	version 0
	1-9 有9个
	10-99 有90个
	100-999 有900个
	...
*/




class Solution {
public:
	int findNthDigit(int n) {
		if (n < 10)
			return n;
		int i = 2;
		long long cnt = 90;
		long long length = 9;
		for (;length + i * cnt < n;i++) {
			length += i * cnt;
			cnt *= 10;
		}
		long long num = pow(10, i - 1) - 1 + (n - length + 1) / i;
		int index = (n - length - 1) % i;
		return to_string(num)[index] - '0';
	}
};



