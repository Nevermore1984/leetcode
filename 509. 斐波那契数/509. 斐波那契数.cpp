
/*
	version 0
	
*/






class Solution {
public:
	int fib(int N) {
		int pre0 = 0;
		int pre1 = 1;
		if (N == 0)
			return pre0;
		if (N == 1)
			return pre1;
		int now = 0;
		for (int i = 2;i <= N;i++) {
			now = pre1 + pre0;
			pre0 = pre1;
			pre1 = now;
		}
		return now;
	}
};



