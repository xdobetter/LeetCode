#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<utility>
/*
�ж��������Ƿ����������ͬ������ i �� j��ʹ�� nums [i] = nums [j]������ i �� j �Ĳ�ľ���ֵ������ k
*/
using namespace std;
class Solution {
public:
	bool containsNearbyDuplicate(vector<int>& nums, int k) {
		unordered_map<int,int> umap;//��ϣ����Ϊnums[i]��ֵΪi����hash��sizeΪk�����øù�ϣ���γ�һ����������
		for (int i = 0; i < nums.size(); i++)
		{
			if (umap.find(nums[i])!=umap.end())//���hash�������ҵ��ظ�Ԫ�أ�˵������
			{
				return true;
			}
			umap.insert(make_pair(nums[i],i));//��hash�������Ԫ��
			if (umap.size()>k)//��ϣ���С����k����ɾ����ɵ�Ԫ��/������ӵ�Ԫ��
			{
				umap.erase(nums[i - k]);
			}
		}
		return false;
	}
};
int main()
{
	Solution s;
	vector<int> nums = { 1, 2, 3, 1 };
	cout << "Test" << endl;
	cout<<s.containsNearbyDuplicate(nums,3);
	return 0;
}
