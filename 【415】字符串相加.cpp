///*
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// *                                                                                                 
// * Blog: https://blog.csdn.net/weixin_41234001                                      
// *                                                                                                 
// * Author: DoBetter                                                               
// *                                                                                                 
// * Time: 2019.12.06                                                                            
// *                                                                                                 
// * Describe: �������                                             
// *                                                                                                 
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// */
//#include<iostream>
//#include <string>
//using namespace std;
//class Solution {
//public:
//	string addStrings(string num1, string num2) {
//		//if (num1.length()==1&& stoi(to_string(num1[0]))==0|| num2.length() == 1 && stoi(to_string(num2[0])) == 0)
//		//{
//		//	return "0";//���num1ĳ���ַ�
//		//}
//		int i = num1.length() - 1, j = num2.length() - 1;//i,jָ��ֲ�ָ��num1��num2β����ģ���˹��ӷ�
//		int carry = 0;//�����λֵ
//		string res = "";//��¼���
//		while (i >= 0 || j >= 0)
//		{
//			int tmp = 0;//����ÿһλ��ӵ�ֵ
//			int n1 = i < 0 ? 0 : num1[i]-'0';
//			int n2 = j < 0 ? 0 : num2[j] - '0';
//			tmp = n1 + n2 + carry;//����ÿһ��Ӧλ��ӵĺ�
//			carry = tmp / 10;//������λ��
//			tmp %= 10;//��������
//			res.append(to_string(tmp));
//			i--, j--;//ǰ��һλ
//		}
//		if (carry == 1)//���num1��num2�����һλ��Ӻ��λ�ˣ����Ҫ���Ͻ�λ
//		{
//			res.append(to_string(carry));
//		}
//		string s(res.rbegin(), res.rend());//����������
//		return s;
//	}
//};
//int main()
//{
//	Solution s;
//	cout << s.addStrings("0", "0") << endl;
//	return 0;
//}