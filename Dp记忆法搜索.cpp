//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int maxn = 1000;
//int dp[maxn];
//int F(int n)
//{
//	if (n == 0 || n == 1) return 1;//�ݹ�߽�
//	if (dp[n] != 0) return dp[n];//�Ѿ��������ֱ�ӷ��ؽ���������ظ�����
//	else
//	{
//		dp[n] = F(n - 1) + F(n - 2);//����F(n)����������dp[n]
//		return dp[n];//���ؽ��
//	}
//}
//int main()
//{
//	cout << F(3) << endl;
//	return 0;
//}