///*
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// *                                                                                                 
// * Blog: https://blog.csdn.net/weixin_41234001                                      
// *                                                                                                 
// * Author: DoBetter                                                               
// *                                                                                                 
// * Time: 2019.11.30                                                                            
// *                                                                                                 
// * Describe: ����find����ʵ��                                            
// *                                                                                                 
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// */
//#include<iostream>
//#include <string>
//#include <vector>
//using namespace std;
////class Solution {
////public:
////	string longestCommonPrefix(vector<string>& strs) {
////		if (strs.size() == 0) return "";//strs���ַ�������Ϊ��
////		string prefix = strs[0];//�����һ���ַ���Ϊ����ǰ׺
////		for (int i=1;i<strs.size();i++)//�ж�ÿһ���ַ������Ƿ���prefix��
////		{
////			while (strs[i].find(prefix)!=0)//���������prefix����prefix���ȼ�1���ж�prefix-1�Ƿ�Ϊ���Ӵ���ֱ��prefixΪ�գ�
////			{
////				if (prefix == "") return "";//���prefixΪ�մ�����˵������ǰ׺Ϊ��
////				prefix = prefix.substr(0, prefix.length() - 1);
////			}
////		}
////		return prefix;
////	}
////};
////˫ָ�뷨�����������
//class Solution {
//public:
//	string longestCommonPrefix(vector<string>& strs) {
//		string result = "";
//		for (int i=0;i<strs[0].size();i++)
//		{
//			for (int j=1;j<strs.size();j++)
//			{
//				if (strs[0][i]!=strs[j][i])
//				{
//					return result;//��ǰ��result��Ϊ�����ǰ׺
//				}
//			}
//			result += strs[0][i];
//		}
//		return result;
//	}
//};