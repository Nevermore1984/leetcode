
/*
	version 0
	一开始就想到了要用异或，异或完了，1的个数就是汉明距离，但是在计算1的个数时  ，我用了nums%10  2333333
	我好傻啊  2进制  10进制都弄混了
	
*/





class Solution {
public:
	int hammingDistance(int x, int y) {
		int res = 0;
		int nums = x ^ y;
		while (nums) {
			nums = nums & (nums - 1);
			res++;
		}
		return res;
	}
};


