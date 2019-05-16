
/*
	version 0
	简单贪心，懒得写了
*/





class Solution {
public:
	static bool cmp(const int &a, const int &b)
	{
		return a<b;
	}
	int findContentChildren(vector<int>& g, vector<int>& s) {
		if (g.size()<1) return 0;
		sort(s.begin(), s.end(), cmp);
		sort(g.begin(), g.end(), cmp);
		int child = 0;
		int cookie = 0;
		while (child<g.size() && cookie<s.size())
		{
			if (g[child] <= s[cookie])
			{
				child++;
			}
			cookie++;
		}
		return child;
	}
};


