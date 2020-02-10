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
		ListNode* res = new ListNode(0);//存储结果
		res->next = NULL;
		ListNode* p = res;//指向存储链表的当前结点
		ListNode* q;//新建结点
		int num1, num2, temp=0;
		while (l1!=NULL||l2!=NULL)
		{
			//获取两个链表相加的数字
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
			//数字相加
			p->val = (num1 + num2 + temp) % 10;//获得相加的数字
			temp = (num1 + num2 + temp) / 10;//每次相加后的进位数
			//新建结点
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
//遍历链表
