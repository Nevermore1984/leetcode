
/*
	version 0
	执行用时 8ms
	内存消耗 8.1MB
	在网上找了找，还是不太明白这个uint32_t，有点懵逼
*/






class Solution {
public:
	int hammingWeight(uint32_t n) {
		int ans = 0;
		while (n)
		{
			ans += n % 2;
			n >>= 1;
		}
		return ans;
	}
};






