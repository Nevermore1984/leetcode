
/*
	version 0
	大一刚开学的时候居然觉得这个难到爆炸，唉
*/




class Solution {
public:
	string addStrings(string num1, string num2) {
		string res = "";
		int carry = 0;
		int len1 = num1.size();
		int len2 = num2.size();
		for (int i = 1; i <= len1 || i <= len2; i++) {
			int sum = carry;
			if (i <= len1) sum += num1[len1 - i] - '0';
			if (i <= len2) sum += num2[len2 - i] - '0';
			res = (char)(sum % 10 + '0') + res;
			carry = sum / 10;
		}
		if (carry > 0) res = '1' + res;
		return res;
	}
};



