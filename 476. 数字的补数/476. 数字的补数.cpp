
/*
	version 0
	这个是评论区大佬的写法
	我的思路也是了利用num & 1来判断1， 判断1的最高位后通过移位->与0同或->移位  有点麻烦  
	没有这个秀
*/



class Solution {
public:
	int findComplement(int num) {
		int ans = 0, i = 0;
		while (num >> 1) {
			if (num & 1)
				ans &= ~(1 << i);
			else
				ans |= (1 << i);
			num >>= 1;
			i++;
		}
		return ans;
	}
};


