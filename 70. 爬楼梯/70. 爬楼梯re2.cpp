
/*
	version 3
	执行用时 4ms
	内存消耗 8.3MB
	矩阵快速幂
*/




class Solution {
public:
	long long climbStairs(long long n) {
		long long **e = new long long*[2];
		e[0] = new long long[2];
		e[1] = new long long[2];
		e[0][0] = 1;
		e[0][1] = 1;
		e[1][0] = 1;
		e[1][1] = 0;
		long long **res;
		res = Bpow(e,n);
		return res[0][0];
	}
	long long** Bpow(long long** t, long long n) {
		long long **res = new long long*[2];
		res[0] = new long long[2];
		res[1] = new long long[2];
		res[0][0] = 1;
		res[0][1] = 0;
		res[1][0] = 0;
		res[1][1] = 1;
		while (n > 0) {
			if ((n & 1) == 1) {
				res = multiply(res, t);
			}
			n >>= 1;
			t = multiply(t, t);
		}
		return res;
	}
	long long** multiply(long long** a, long long** b) {
		long long **res = new long long*[2];
		res[0] = new long long[2];
		res[1] = new long long[2];
		for (long long i = 0; i < 2; i++) {
			for (long long j = 0; j < 2; j++) {
				res[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j];
			}
		}
		return res;
	}
};


