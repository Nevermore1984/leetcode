
/*
	version 0
	执行用时 28ms
	内存消耗 8.6MB
*/

class Solution {
public:
	int romanToInt(string s) {
		int len = s.length();
		int *num = new int[len + 1];
		for (int i = 0;i < len;i++) {
			switch (s[i])
			{
			case 'I':
				num[i] = 1;break;
			case 'V':
				num[i] = 5;break;
			case 'X':
				num[i] = 10;break;
			case 'L':
				num[i] = 50;break;
			case 'C':
				num[i] = 100;break;
			case 'D':
				num[i] = 500;break;
			default:
				num[i] = 1000;break;
			}
		}
		int sum = num[len-1];
		for (int i = len - 1;i > 0;i--)
			if (num[i] <= num[i - 1])
				sum += num[i - 1];
			else
				sum -= num[i - 1];
		return sum;
	}
};
