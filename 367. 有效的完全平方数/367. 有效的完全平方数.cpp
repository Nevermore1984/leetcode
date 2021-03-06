
/*
	version 0
	利用 1+3+5+7+9+…+(2n-1)=n^2，即完全平方数肯定是前n个连续奇数的和
*/




class Solution {
public:
	bool isPerfectSquare(int num) {
		int sumnum = 1;
		while (num > 0) {
			num -= sumnum;
			sumnum += 2;
		}

		return num == 0;
	}
};



