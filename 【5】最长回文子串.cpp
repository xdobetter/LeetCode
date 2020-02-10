#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
	string longestPalindrome(string s) {
		int slen = s.size();//�ַ�������
		int ans = 1;//�洢���Ĵ�����
		int left = 0;//���Ĵ��������±�
		int count = 0;//ȡ�±�С�Ļ��Ĵ�
		//�߽�
		const int maxn = 10;//����Ĺ���ᵼ��ջ���Stack Overflow
		int dp[maxn][maxn];///Ĭ��Ϊ0��0��ʾdp[i][j]��Ϊ���Ĵ���1��ʾΪ���Ĵ�
		memset(dp, 0, sizeof(dp));//��ʼ��Ϊ0
		for (int i = 0; i < slen; i++)
		{
			dp[i][i] = 1;//i��iΪ���Ĵ�
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
		
		//״̬ת�Ʒ���
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
		//�����
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