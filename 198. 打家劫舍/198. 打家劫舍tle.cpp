
/*
	version 0
	
	bfs 超时了！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
	!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	！！！！！！！！！！！！
*/




class Solution {
public:
	int rob(vector<int>& nums) {
		struct choice {
			int sum;
			int nextchoice;
		};
		int res = 0;
		int lenth = nums.size() - 1;
		queue<choice> myq;
		choice t;
		t.sum = 0;
		t.nextchoice = 0;
		myq.push(t);
		while (!myq.empty()) {
			choice thistime = myq.front();
			myq.pop();
			if (thistime.nextchoice > lenth)
				res = max(res, thistime.sum);
			else {
				choice temp1;
				temp1.sum = thistime.sum + nums[thistime.nextchoice];
				temp1.nextchoice = thistime.nextchoice + 2;
				myq.push(temp1);
				choice temp2;
				temp2.sum = thistime.sum;
				temp2.nextchoice = thistime.nextchoice + 1;
				myq.push(temp2);
			}
		}
		return res;
	}
};



