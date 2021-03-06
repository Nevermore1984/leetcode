
/*
	version 0
	执行用时 8ms
	内存消耗 8.3MB
*/


class Solution {
public:
	bool isValid(string s) {
		if (s.empty())
			return true;
		map<char, char> checklist;
		stack<char> stack;
		checklist.insert(pair<char,char>(')', '('));
		checklist.insert(pair<char, char>(']', '['));
		checklist.insert(pair<char, char>('}', '{'));
		for (int i = 0;i < s.length();i++) {
			char c = s[i];
			if (c == '(' || c == '[' || c == '{'||stack.empty())
				stack.push(c);
			else {
				if (stack.top() == checklist[c])
					stack.pop();
				else
					return false;
			}
		}
		if (stack.empty())
			return true;
		return false;
	}
};


