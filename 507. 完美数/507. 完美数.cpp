
/*
	version 0
	愤怒打表！！！！！！
*/






class Solution {
public:
	bool checkPerfectNumber(int num) {
		return num == 6 || num == 28 || num == 496 || num == 8128 || num == 33550336;
	}
};

int main() {

	int res;
	for (int i = 1;i <= 100000000;i++) {
		res = 1;
		int j;
		for (j = 2;j < sqrt(i);j++)
			if (i%j == 0)
					res += i / j + j;

		if (j*j == i)
			res += j;
		if (res == i)
			cout << i << endl;
	}
	return 0;
}

