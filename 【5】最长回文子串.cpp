#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
	string longestPalindrome(string s) {
		int slen = s.size();//字符串长度
		int ans = 1;//存储回文串长度
		int left = 0;//回文串的左右下标
		int count = 0;//取下标小的回文串
		//边界
		const int maxn = 10;//申请的过大会导致栈溢出Stack Overflow
		int dp[maxn][maxn];///默认为0，0表示dp[i][j]不为回文串，1表示为回文串
		memset(dp, 0, sizeof(dp));//初始化为0
		for (int i = 0; i < slen; i++)
		{
			dp[i][i] = 1;//i到i为回文串
			if (s[i]==s[i+1])
			{
				dp[i][i + 1] = 1;
				ans = 2;
				if (count==0)
				{
					left = i;
					count = 1;
				}
			}
		}
		
		//状态转移方程
		for (int Len = 3; Len <= slen; Len++)
		{
			count = 0;
			for (int i = 0; i < slen-Len+1; i++)
			{
				int j = i + Len - 1;
				if (s[i]==s[j]&&dp[i+1][j-1])
				{
					dp[i][j] = 1;
					ans = Len;
					if (count == 0)
					{
						left = i;
						count = 1;
					}
				}
			}
		}
		//输出答案
		return  s.substr(left,ans);
	}
};

int main()
{
	Solution s;
	string s2("abcba");
	cout<<s.longestPalindrome(s2)<<endl;
	//cout << s2.substr(0,3);
	return 0;
}