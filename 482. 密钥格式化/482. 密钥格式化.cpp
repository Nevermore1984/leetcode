
/*
	version 0
	评论区的 看到用栈来做 感觉很契合  就摘过来了
*/




class Solution {
public:
	string licenseKeyFormatting(string s, int k) {
		stack<char> st;
		string ret;
		int count = 0;
		for (int i = s.size() - 1; i >= 0; --i) {
			if (s[i] != '-') {
				++count;
				if (islower(s[i])) s[i] = toupper(s[i]);
				if (count > k && (count % k == 1 || k == 1))
					st.push('-');
				st.push(s[i]);
			}
		}
		while (!st.empty()) {
			ret.push_back(st.top());
			st.pop();
		}

		return ret;
	}
};



