///*
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// *                                                                                                 
// * Blog: https://blog.csdn.net/weixin_41234001                                      
// *                                                                                                 
// * Author: DoBetter                                                               
// *                                                                                                 
// * Time: 2019.12.11                                                                           
// *                                                                                                 
// * Describe: $Used to do something$                                             
// *                                                                                                 
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// */
//#include <iostream>
//#include <vector>
//#include <map>
//#include <queue>
//#include<utility>
//#include <unordered_map>//
////�Լ����뷨������map�У�ͨ��ӳ�䣬���洢ÿ��������Ƶ�ʣ����forѭ��һ�£���������ڶ���
//using namespace std;
//class Solution {
//public:
//	class cmp {
//	public:
//		//ͨ�����ز������������ȶ��ж����������
//		bool operator()(pair<int, int>& a, pair<int, int>& b)
//		{
//			return a.second > b.second;
//		}
//	};
//	vector<int> topKFrequent(vector<int>& nums, int k) {
//		//map<int, int> myMap; 
//		//��ʹ��map��ԭ����map�ײ��Ǻ������ÿ�β�����������������ʱ�临�Ӷ�
//		unordered_map<int, int> myMap;
//		//ͳ�Ƹ�ֵ���ֵĴ���
//		for (auto num : nums)
//		{
//			myMap[num]++;
//		}
//		//����map������С�ѱ���Ƶ������k��Ԫ��
//		//���ȶ��У�����С��Ԫ�ط��ڶ���
//		priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
//		for (unordered_map<int, int>::iterator beg = myMap.begin(); beg != myMap.end(); beg++)
//		{
//			pq.push(make_pair(beg->first, beg->second));//ѹ��ü�ֵ��
//			if (pq.size() > k)//����Ԫ�ض���k��
//			{
//				pq.pop();
//			}
//		}
//		//ȡ����С���е�Ԫ��
//		vector<int> res;
//		while (!pq.empty())
//		{
//			res.push_back(pq.top().first);
//			pq.pop();
//		}
//		//���Ҫ�������
//		vector<int> tempRes(res.rbegin(), res.rend());
//		return tempRes;
//	}
//};
//int main()
//{
//	Solution s;
//	vector<int> test = { 1,1,1,2,2,3 };
//	s.topKFrequent(test, 2);
//	return 0;
//}