
/*
	version 0
	这样有点慢，时间换空间
	c++sort是真的强大
*/




class Solution {
public:
	bool canConstruct(string ransomNote, string magazine) {
		sort(ransomNote.begin(), ransomNote.end());
		sort(magazine.begin(), magazine.end());
		int notelen = ransomNote.length();
		int magalen = magazine.length();
		int i = 0;
		int j = 0;
		while (i < notelen&&j < magalen) {
			while (j < magalen&&ransomNote[i] != magazine[j])
				j++;
			if (j >= magalen)
				break;
			i++;
			j++;
		}
		if (i < notelen)
			return false;
		return true;
	}
};



