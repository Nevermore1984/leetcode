
/*
	version 0
	执行用时 8ms
	内存消耗 8.1MB
	uint32_t好像有点懂了
*/





class Solution {
public:
	uint32_t reverseBits(uint32_t n) {
		uint32_t res;
		for (int i = 0;i < 32;i++) {
			res = (res << 1) | (n & 1);
			n >>= 1;
		}
		return res;
	}
};




