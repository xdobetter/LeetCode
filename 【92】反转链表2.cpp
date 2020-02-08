#include<iostream>
#include<vector>
using namespace std;
//������
struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
	ListNode() {}
};
class Solution {
public:
	ListNode* reverseBetween(ListNode* head, int m, int n) {
		//����Ϊ��
		if (head==NULL)
		{
			return head;
		}
		//Ѱ�ҿ�ʼ���λ��
		ListNode* prev=NULL;//ָ��ǰ����ǰ��
		ListNode* curr = head;//��ǰ���
		while (m>1)
		{
			prev = curr;
			curr= curr->next;
			m--;
			n--;
		}
		//����ʼ��ת
		ListNode* con = prev;//��ת�����ͷ���
		ListNode* tail = curr;//��ת�����β
		while (n>0)
		{
			ListNode* nextTemp = curr->next;//��ǰ������һ�����
			curr->next = prev;//��ǰ���ָ����ǰ��
			prev = curr;//ǰ�̸�Ϊ��ǰ���
			curr = nextTemp;//�Ƶ���ǰ���Ϊ��һ�����
			n--;
		}
		//����con��tail�޸�����
		//����ͷ
		if (con==NULL)//ͷ���Ϊprev
		{
			head=prev;
		}
		else//��Ϊ��
		{
			con->next = prev;
		}
		//����β
		tail->next = curr;
		return head;
	}
};
//�������
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
//�������
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