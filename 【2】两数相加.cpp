#include<iostream>
#include<algorithm>
using namespace std;
struct ListNode
{
	int val;
	ListNode* next;
	ListNode(int x) :val(x), next(NULL) {}
};
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* res = new ListNode(0);//�洢���
		res->next = NULL;
		ListNode* p = res;//ָ��洢����ĵ�ǰ���
		ListNode* q;//�½����
		int num1, num2, temp=0;
		while (l1!=NULL||l2!=NULL)
		{
			//��ȡ����������ӵ�����
			if (l1!=NULL) {
				num1 = l1->val;
				l1 = l1->next;
			}
			else
			{
				num1 = 0;
			}
			if (l2 != NULL) {
				num2 = l2->val;
				l2 = l2->next;
			}
			else
			{
				num2 = 0;
			}
			//�������
			p->val = (num1 + num2 + temp) % 10;//�����ӵ�����
			temp = (num1 + num2 + temp) / 10;//ÿ����Ӻ�Ľ�λ��
			//�½����
			if (l1!=NULL||l2!=NULL)
			{
				q = new ListNode(0);
				q->next = NULL;
				p->next = q;
				p = q;
			}
		}
		if (temp!=0)
		{
			q = new ListNode(temp);
			q->next = NULL;
			p->next = q;
		}
		return res;
	}
};
//��������
