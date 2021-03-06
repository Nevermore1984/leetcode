
/*
	version 2
	执行用时 24ms
	内存消耗 12MB
*/

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		if (strs.empty())
			return "";
		else
			return partition(strs, 0, strs.size() - 1);
	}
private:
	string partition(vector<string>& strs, int left, int right) {
		if (left == right)
			return strs[left];
		else {
			int mid = (left + right) / 2;
			string Leftpre = partition(strs, left, mid);
			string Rightpre = partition(strs, mid+1, right);
			return result(Leftpre, Rightpre);
		}
	}

	string result(string left, string right) {
		int minlen = min(left.length(), right.length());
		for (int i = 0;i < minlen;i++)
			if (left[i] != right[i])
				return left.substr(0, i);
		return left.substr(0, minlen);
	}
};



