///**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
//#include<iostream>
//#include<vector>
//using namespace std;
////链表结构
//struct ListNode
//{
//	int val;
//	ListNode* next;
//	ListNode(int x) :val(x), next(NULL) {}
//	ListNode() {}//空构造函数
//};
//class Solution {
//public:
//	ListNode* reverseList(ListNode* head) {//不需要加引用
//		ListNode* prev = NULL;//前驱结点
//		ListNode* curr = head;//当前结点
//		while (curr!=NULL)
//		{
//			ListNode* nextTemp = curr->next;//保存当前结点的下一节点
//			curr->next = prev;//当前结点的下一节点指向其前驱结点
//			prev = curr;//修改前驱结点为当前结点
//			curr = nextTemp;//修改当前结点为nextTemp
//		}
//		return prev;//返回头结点
//	}
//};
////创建链表
//ListNode* Create(vector<int> ivec)//不需要加引用
//{
//	ListNode* head,*p,*q;//头结点
//	//带头结点的链表
//	head = new ListNode;
//	head->next = NULL;
//	p = head;
//	for (int i = 0; i < ivec.size(); i++)
//	{
//		q = new ListNode(ivec[i]);//新建结点
//		q->next = NULL;//后继结点置空
//		p->next = q;
//		p = q;//p指向创建的结点
//	}
//	return head;
//}
////输出链表
//void PrintList(ListNode* head)//不需要加引用
//{
//	//head = head->next;
//	while (head!=NULL)
//	{
//		cout << head->val << " ";
//		head = head->next;
//	}
//}
//int main()
//{
//	vector<int> ivec(3);
//	for (int i = 0; i<ivec.size(); i++)
//	{
//		cin >> ivec[i];
//	}
//	ListNode* head = Create(ivec);
//	PrintList(head->next);
//	cout << endl;
//	Solution s;
//	PrintList(s.reverseList(head->next));
//	return 0;
//}