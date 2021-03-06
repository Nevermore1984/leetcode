
/*
	version 0
	看的评论区大佬的思路
	使用0xf(00...01111b)获取num的低4位。这个很妙
*/




class Solution {
public:
	string toHex(int num) {
		if (num == 0) return "0";
		string hex = "0123456789abcdef", ans = "";
		while (num && ans.size() < 8) {
			ans = hex[num & 0xf] + ans;
			num >>= 4;
		}
		return ans;
	}
};




