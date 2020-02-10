#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<utility>
/*
判断数组中是否存在两个不同的索引 i 和 j，使得 nums [i] = nums [j]，并且 i 和 j 的差的绝对值不大于 k
*/
using namespace std;
class Solution {
public:
	bool containsNearbyDuplicate(vector<int>& nums, int k) {
		unordered_map<int,int> umap;//哈希表，键为nums[i]，值为i，该hash的size为k；利用该哈希表形成一个滑动窗口
		for (int i = 0; i < nums.size(); i++)
		{
			if (umap.find(nums[i])!=umap.end())//如果hash表中能找到重复元素，说明存在
			{
				return true;
			}
			umap.insert(make_pair(nums[i],i));//向hash表中添加元素
			if (umap.size()>k)//哈希表大小超过k，则删除最旧的元素/最先添加的元素
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
