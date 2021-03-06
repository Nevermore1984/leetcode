
/*
	version 0
	执行用时 12ms
	内存消耗 9.5MB
*/



/*
 c++里有符号跟无符号数一起运算时全部当成无符号数处理，负数最高位是符号位，是1，于是负数就变成了大整数，然后就跳出循环了
 所以（-1<string.length()）的返回值是0，我的天，卡了我一个小时。┗|｀O′|┛ 嗷~~
*/
class Solution {
public:
	int strStr(string haystack, string needle) {
		if (needle.empty())
			return 0;
		vector<int> next = getnext(needle);
		int i = 0;
		int j = 0;
		//一开始没加这个j<0的判断，结果一直不对，搞了一个多小时。orz
		while ((j < 0) || (i < haystack.length()) && (j < needle.length())) {
			if (j == -1 || haystack[i] == needle[j]) {
				++i;
				++j;
			}
			else
				j = next[j];

		}
		if (j == needle.length())
			return i - j;
		return -1;
	}
	vector<int> getnext(string t) {
		int k = -1;
		int j = 0;
		vector<int> next;
		for (int i = 0;i < t.length();i++)
			next.push_back(-1);
		while (j < t.length() - 1)
			if (k == -1 || t[j] == t[k])
				if (t[++j] == t[++k])
					next[j] = next[k];
				else
					next[j] = k;
			else
				k = next[k];
		return next;
	}
};





