
/*
	version 0
	评论区的，看着舒服，缓存加滑动窗口，最近好懒啊我
*/





class Solution {
public:
	vector<int> findAnagrams(string s, string p) {
		if (s.size()<p.size())
			return {};
		int l = 0, r = -1;
		vector<int> freq_s(26, 0), freq_p(26, 0), res;
		// 初始化代码值
		for (int i = 0; i < p.size(); i++) {
			freq_p[p[i] - 'a']++;
			freq_s[s[++r] - 'a']++;
		}
		if (freq_s == freq_p)
			res.push_back(l);
		// 固定长度的滑动窗口
		while (r < s.size() - 1) {
			freq_s[s[++r] - 'a']++;
			freq_s[s[l++] - 'a']--;
			if (freq_s == freq_p)
				res.push_back(l);
		}
		return res;
	}
};


