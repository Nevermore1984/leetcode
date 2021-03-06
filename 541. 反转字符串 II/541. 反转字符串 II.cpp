
/*
	version 0
	reverse函数用于反转在[first,last)范围内的顺序（包括first指向的元素，不包括last指向的元素），reverse函数没有返回值
*/








class Solution {
public:
	string reverseStr(string s, int k) {
		for (int i = 0; i < s.size(); i += k << 1) {
			if (i + k >= s.size()) {
				reverse(s.begin() + i, s.end());
				break;
			}
			reverse(s.begin() + i, s.begin() + i + k);
		}
		return s;
	}
};


