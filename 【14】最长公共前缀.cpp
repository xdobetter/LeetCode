///*
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// *                                                                                                 
// * Blog: https://blog.csdn.net/weixin_41234001                                      
// *                                                                                                 
// * Author: DoBetter                                                               
// *                                                                                                 
// * Time: 2019.11.30                                                                            
// *                                                                                                 
// * Describe: 利用find方法实现                                            
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
////		if (strs.size() == 0) return "";//strs无字符串，则为空
////		string prefix = strs[0];//假设第一个字符串为公共前缀
////		for (int i=1;i<strs.size();i++)//判断每一个字符串中是否含有prefix，
////		{
////			while (strs[i].find(prefix)!=0)//如果不含有prefix，则将prefix长度减1，判断prefix-1是否为其子串，直到prefix为空，
////			{
////				if (prefix == "") return "";//如果prefix为空串，则说明公共前缀为空
////				prefix = prefix.substr(0, prefix.length() - 1);
////			}
////		}
////		return prefix;
////	}
////};
////双指针法——暴力求解
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
//					return result;//当前的result即为最长公共前缀
//				}
//			}
//			result += strs[0][i];
//		}
//		return result;
//	}
//};