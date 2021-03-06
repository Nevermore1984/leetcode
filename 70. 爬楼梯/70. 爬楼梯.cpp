
/*
	version 0
	执行用时 8ms
	内存消耗 8.4MB
	
	斐波那契数列+记忆数组
*/


class Solution {
public:
	int climbStairs(int n) {
		int *memory = new int[n + 1];
		return climb(0, n,memory);
	}
private:
	int climb(int i, int n, int *memory) {

		if (i > n)
			return 0;
		if (i == n)
			return 1;
		if (memory[i] > 0)
			return memory[i];
		memory[i] = climb(i + 1, n, memory) + climb(i + 2, n, memory);
		return climb(i + 1, n, memory) + climb(i + 2, n, memory);
	}
};


