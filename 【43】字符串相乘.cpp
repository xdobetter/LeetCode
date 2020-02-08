///*
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// *                                                                                                 
// * Blog: https://blog.csdn.net/weixin_41234001                                      
// *                                                                                                 
// * Author: DoBetter                                                               
// *                                                                                                 
// * Time: 2019.12.06                                                                            
// *                                                                                                 
// * Describe: 字符串相乘,竖式乘法，每一位和num1串进行相乘，相乘的结果保存在字符串中，然后再执行字符串相加算法                                          
// *                                                                                                 
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// */
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//class Solution {
//public:
//	
//	string multiply(string num1, string num2) {
//		if (num1 == "0" || num2 == "0")
//		{
//			return "0";
//		}
//		int len1 = num1.length() - 1;
//		int len2 = num2.length() - 1;
//		string res = "0";//保存结果
//		for (int i=len2;i>=0;i--)//遍历num1串中的每个字符
//		{
//			string tempRes = "";//保存num2每一位与num1相乘后的结果
//			int carry = 0;//保留每次相乘的进位
//			for (int k=0;k<len2-i;k++)//对每一位进行加入0
//			{
//				tempRes.append("0");
//			}
//			for (int j = len1; j >=0||carry!=0; j--)//遍历num2串中的每个字符
//				//carry!=0是因为最后一次相乘后也会出现进位
//			{
//				int n2 = num2[i] - '0';
//				int n1 = j<0?0:num1[j] - '0';
//				int product = (n1 * n2 + carry)%10;//存储相乘后的每一位的结果
//				carry = (n1 * n2 + carry) / 10;//存储进位
//				tempRes.append(to_string(product));//将结果加入
//			}
//			string tempRes2(tempRes.rbegin(), tempRes.rend());
//			res=addStrings(res, tempRes2);//相加
//		}
//		return res;
//	}
//	string addStrings(string num1, string num2) {
//		int len1 = num1.length() - 1, len2 = num2.length() - 1;
//		int carry = 0;//保留进位
//		string res = "";//存储结果
//		while (len1 >= 0 || len2 >= 0 || carry != 0)
//		{
//			int n1 = len1 < 0 ? 0 : num1[len1] - '0';
//			int n2 = len2 < 0 ? 0 : num2[len2] - '0';
//			int product = (n1 + n2 + carry) % 10;//相加值
//			carry = (n1 + n2 + carry) / 10;//进位值
//			len1--, len2--;
//			res.append(to_string(product));
//		}
//		string tempRes(res.rbegin(), res.rend());//逆序
//		return	tempRes;
//	}
//};
//int main()
//{
//	Solution s;
//	cout << s.multiply("99","9") << endl;
//	return 0;
//}