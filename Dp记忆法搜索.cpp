//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int maxn = 1000;
//int dp[maxn];
//int F(int n)
//{
//	if (n == 0 || n == 1) return 1;//递归边界
//	if (dp[n] != 0) return dp[n];//已经计算过，直接返回结果，不再重复计算
//	else
//	{
//		dp[n] = F(n - 1) + F(n - 2);//计算F(n)，并保存至dp[n]
//		return dp[n];//返回结果
//	}
//}
//int main()
//{
//	cout << F(3) << endl;
//	return 0;
//}