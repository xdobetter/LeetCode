///*
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// *                                                                                                 
// * Blog: https://blog.csdn.net/weixin_41234001                                      
// *                                                                                                 
// * Author: DoBetter                                                               
// *                                                                                                 
// * Time: 2019.11.30                                                                            
// *                                                                                                 
// * Describe: $Used to do something$                                             
// *                                                                                                 
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// */
//
////Java���鷽ʽ
////public class Solution {
////	public boolean checkInclusion(String s1, String s2) {
////		if (s1.length() > s2.length())
////			return false;
////		int[] s1map = new int[26];
////		for (int i = 0; i < s1.length(); i++)//�洢ÿ���ַ����ֵ�Ƶ��
////			s1map[s1.charAt(i) - 'a']++;
////		for (int i = 0; i <= s2.length() - s1.length(); i++) {
////			int[] s2map = new int[26];
////			for (int j = 0; j < s1.length(); j++) {
////				s2map[s2.charAt(i + j) - 'a']++;
////			}
////			if (matches(s1map, s2map))
////				return true;
////		}
////		return false;
////	}
////	public boolean matches(int[] s1map, int[] s2map) {
////		for (int i = 0; i < 26; i++) {
////			if (s1map[i] != s2map[i])
////				return false;
////		}
////		return true;
////	}
////}
////��������
////public class Solution {
////	public boolean checkInclusion(String s1, String s2) {
////		if (s1.length() > s2.length())
////			return false;
////		int[] s1map = new int[26];//S1��ϣ��
////		int[] s2map = new int[26];//S2��ϣ��
////		for (int i = 0; i < s1.length(); i++) {
////			s1map[s1.charAt(i) - 'a']++;
////			s2map[s2.charAt(i) - 'a']++;
////		}
////		for (int i = 0; i < s2.length() - s1.length(); i++) {
////			if (matches(s1map, s2map))
////				return true;
////			s2map[s2.charAt(i + s1.length()) - 'a']++;
////			s2map[s2.charAt(i) - 'a']--;
////		}
////		return matches(s1map, s2map);
////	}
////	public boolean matches(int[] s1map, int[] s2map) {
////		for (int i = 0; i < 26; i++) {
////			if (s1map[i] != s2map[i])
////				return false;
////		}
////		return true;
////	}
////}
//
//#include <iostream>
//#include <algorithm>
//#include <string>
//#include<vector>
//using namespace std;
//using namespace std;
//////��������
//////class solution {
//////public:
//////	bool checkinclusion(string s1, string s2) {
//////		int s1map[26];
//////		int s2map[26];
//////		if (s1.length() > s2.length()) return false;//s1�ĳ��ȴ���s2��˵��s2�������s1
//////		for (int i=0;i<s1.length();i++)
//////		{
//////			s1map[s1[i] - 'a']++;//��ȡ��i��Ԫ�س��ֵ�Ƶ��
//////			s2map[s2[i] - 'a']++;
//////		}
//////		for (int i=0;i<s2.length()-s1.length();i++)
//////		{
//////			if (matches(s1map,s2map))
//////			{
//////				return true;//�������Ƶ��һ����˵������
//////			}
//////			s2map[s2[i + s1.length()] - 'a']++;//���µĺ����ַ���ӵ����迼�ǵ��´�����
//////			s2map[s2[i] - 'a']--;//ȥ�����ڵĵ�i���ַ�
//////		}
//////		if (matches(s1map, s2map))
//////		{
//////			return true;//�������Ƶ��һ����˵������
//////		}
//////		return false;
//////	}
//////	bool matches(int s1map[], int s2map[])//�жϴ����ڵ�Ԫ�س���Ƶ���Ƿ�һ��
//////	{
//////		for (int i=0;i<26;i++)
//////		{
//////			if (s1map[i]!=s2map[i])
//////			{
//////				return false;
//////			}
//////		}
//////		return true;
//////	}
//////};
////int main() {
////	Solution s;
////	string s2 = "ab";
////	cout << s2.length()<<endl;
////	if (s.checkInclusion("ab","eidbaooo"))
////	{
////		cout << "true" << endl;
////	}
////	else
////	{
////		cout << "false" << endl;
////	}
////	return 0;
////}
//
//class Solution {
//public:
//	bool checkInclusion(string s1, string s2) {
//		vector<int> s1map(26);
//		vector<int> s2map(26);
//		if (s1.length() > s2.length()) return false;//s1�ĳ��ȴ���s2��˵��s2�������s1
//		for (int i = 0; i < s1.length(); i++)
//		{
//			s1map[s1[i] - 'a']++;//��ȡ��i��Ԫ�س��ֵ�Ƶ��
//			s2map[s2[i] - 'a']++;
//		}
//		for (int i = 0; i < s2.length() - s1.length(); i++)
//		{
//			if (s1map==s2map)
//			{
//				return true;//�������Ƶ��һ����˵������
//			}
//			s2map[s2[i + s1.length()] - 'a']++;//���µĺ����ַ���ӵ����迼�ǵ��´�����
//			s2map[s2[i] - 'a']--;//ȥ�����ڵĵ�i���ַ�
//		}
//		return s1map == s2map;
//	}
//};
//int main() {
//	Solution s;
//	string s2 = "ab";
//	cout << s2.length() << endl;
//	if (s.checkInclusion("ab", "eidbaooo"))
//	{
//		cout << "true" << endl;
//	}
//	else
//	{
//		cout << "false" << endl;
//	}
//	return 0;
//}