///*
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// *                                                                                                 
// * Blog: https://blog.csdn.net/weixin_41234001                                      
// *                                                                                                 
// * Author: DoBetter                                                               
// *                                                                                                 
// * Time: 2019.12.06                                                                            
// *                                                                                                 
// * Describe: �ַ������,��ʽ�˷���ÿһλ��num1��������ˣ���˵Ľ���������ַ����У�Ȼ����ִ���ַ�������㷨                                          
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
//		string res = "0";//������
//		for (int i=len2;i>=0;i--)//����num1���е�ÿ���ַ�
//		{
//			string tempRes = "";//����num2ÿһλ��num1��˺�Ľ��
//			int carry = 0;//����ÿ����˵Ľ�λ
//			for (int k=0;k<len2-i;k++)//��ÿһλ���м���0
//			{
//				tempRes.append("0");
//			}
//			for (int j = len1; j >=0||carry!=0; j--)//����num2���е�ÿ���ַ�
//				//carry!=0����Ϊ���һ����˺�Ҳ����ֽ�λ
//			{
//				int n2 = num2[i] - '0';
//				int n1 = j<0?0:num1[j] - '0';
//				int product = (n1 * n2 + carry)%10;//�洢��˺��ÿһλ�Ľ��
//				carry = (n1 * n2 + carry) / 10;//�洢��λ
//				tempRes.append(to_string(product));//���������
//			}
//			string tempRes2(tempRes.rbegin(), tempRes.rend());
//			res=addStrings(res, tempRes2);//���
//		}
//		return res;
//	}
//	string addStrings(string num1, string num2) {
//		int len1 = num1.length() - 1, len2 = num2.length() - 1;
//		int carry = 0;//������λ
//		string res = "";//�洢���
//		while (len1 >= 0 || len2 >= 0 || carry != 0)
//		{
//			int n1 = len1 < 0 ? 0 : num1[len1] - '0';
//			int n2 = len2 < 0 ? 0 : num2[len2] - '0';
//			int product = (n1 + n2 + carry) % 10;//���ֵ
//			carry = (n1 + n2 + carry) / 10;//��λֵ
//			len1--, len2--;
//			res.append(to_string(product));
//		}
//		string tempRes(res.rbegin(), res.rend());//����
//		return	tempRes;
//	}
//};
//int main()
//{
//	Solution s;
//	cout << s.multiply("99","9") << endl;
//	return 0;
//}