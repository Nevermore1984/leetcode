
/*
	version 0
	执行用时 8ms
	内存消耗 8.2MB
	二分法， mid=（small+big）>>会溢出
*/


// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
	int firstBadVersion(int n) {
		if (isBadVersion(n) && !isBadVersion(n - 1))
			return n;
		int mid, big = n, small = 0;
		while (small < big)
		{
			mid = small + (big - small >> 1);//防止溢出
			if (isBadVersion(mid))
				big = mid;
			else
				small = mid + 1;
		}
		return big;
	}
};



