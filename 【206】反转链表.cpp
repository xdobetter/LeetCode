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
////����ṹ
//struct ListNode
//{
//	int val;
//	ListNode* next;
//	ListNode(int x) :val(x), next(NULL) {}
//	ListNode() {}//�չ��캯��
//};
//class Solution {
//public:
//	ListNode* reverseList(ListNode* head) {//����Ҫ������
//		ListNode* prev = NULL;//ǰ�����
//		ListNode* curr = head;//��ǰ���
//		while (curr!=NULL)
//		{
//			ListNode* nextTemp = curr->next;//���浱ǰ������һ�ڵ�
//			curr->next = prev;//��ǰ������һ�ڵ�ָ����ǰ�����
//			prev = curr;//�޸�ǰ�����Ϊ��ǰ���
//			curr = nextTemp;//�޸ĵ�ǰ���ΪnextTemp
//		}
//		return prev;//����ͷ���
//	}
//};
////��������
//ListNode* Create(vector<int> ivec)//����Ҫ������
//{
//	ListNode* head,*p,*q;//ͷ���
//	//��ͷ��������
//	head = new ListNode;
//	head->next = NULL;
//	p = head;
//	for (int i = 0; i < ivec.size(); i++)
//	{
//		q = new ListNode(ivec[i]);//�½����
//		q->next = NULL;//��̽���ÿ�
//		p->next = q;
//		p = q;//pָ�򴴽��Ľ��
//	}
//	return head;
//}
////�������
//void PrintList(ListNode* head)//����Ҫ������
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