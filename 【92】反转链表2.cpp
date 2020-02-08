#include<iostream>
#include<vector>
using namespace std;
//链表定义
struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
	ListNode() {}
};
class Solution {
public:
	ListNode* reverseBetween(ListNode* head, int m, int n) {
		//链表为空
		if (head==NULL)
		{
			return head;
		}
		//寻找开始结点位置
		ListNode* prev=NULL;//指向当前结点的前继
		ListNode* curr = head;//当前结点
		while (m>1)
		{
			prev = curr;
			curr= curr->next;
			m--;
			n--;
		}
		//链表开始反转
		ListNode* con = prev;//反转链表的头结点
		ListNode* tail = curr;//反转链表的尾
		while (n>0)
		{
			ListNode* nextTemp = curr->next;//当前结点的下一个结点
			curr->next = prev;//当前结点指向其前继
			prev = curr;//前继改为当前结点
			curr = nextTemp;//移到当前结点为下一个结点
			n--;
		}
		//利用con，tail修复连接
		//设置头
		if (con==NULL)//头结点为prev
		{
			head=prev;
		}
		else//不为空
		{
			con->next = prev;
		}
		//设置尾
		tail->next = curr;
		return head;
	}
};
//创建结点
ListNode* Create(vector<int> ivec)
{
	ListNode* head=new ListNode;
	head->next = NULL;
	ListNode* p = head;
	for (int i = 0; i < ivec.size(); i++)
	{
		ListNode* q = new ListNode(ivec[i]);
		q->next = NULL;
		p->next = q;
		p = q;
	}
	return head;
}
//输出链表
void PrintList(ListNode* head)
{
	while (head!=NULL)
	{
		cout << head->val << " ";
		head = head->next;
	}

}
int main()
{
	vector<int> ivec(5);
	for (int i = 0; i < ivec.size(); i++)
	{
		cin >> ivec[i];
	}
	ListNode* head = Create(ivec);
	PrintList(head->next);
	cout << endl;
	Solution s;
	PrintList(s.reverseBetween(head->next, 2, 4));
	return 0;
}