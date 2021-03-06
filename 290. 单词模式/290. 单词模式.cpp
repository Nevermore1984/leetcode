
/*
	version 0
	执行用时 8ms
	内存消耗 8.9MB
	评论区找的-_-，用stringstream把str的空格消去，然后用map处理一下，和我的思路相同，懒了
*/



class Solution {
public:
	bool wordPattern(string pattern, string str) {
		vector<string> words;
		string dir;
		stringstream ss(str);
		while (getline(ss, dir, ' '))
			words.push_back(dir);
		if (pattern.size() != words.size())
			return false;
		unordered_map<char, string> dic;
		for (size_t i = 0; i != words.size(); ++i)
		{
			if (dic.find(pattern[i]) == dic.end())
			{
				for (auto it = dic.cbegin(); it != dic.cend(); ++it)
					if (it->second == words[i])
						return false;
				dic.insert(pair<char, string> {pattern[i], words[i]});
			}
			else if (dic[pattern[i]] != words[i])
				return false;
		}
		return true;
	}
};


