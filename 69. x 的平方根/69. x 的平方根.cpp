
/*
	version 0
	执行用时 12ms
	内存消耗 8.1MB
*/


class Solution {
public:
	int mySqrt(int x) {
		long long low = 0;
		long long high = x;
		long long mid = 0;
		while (low < high) {
			mid = (low + high) / 2;
			if (mid*mid > x)
				high = mid - 1;
			else if (mid*mid == x)
				return mid;
			else
				low = mid + 1;
		}
		if (low*low > x)
			return low - 1;
		return low;
	}
};



