/**
 * @file 19_delete list back k Nodes.cpp
 * @author DoBetter (db.xi@zju.edu.cn)
 * @brief 
 * @version 0.1
 * @date 2021-01-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<iostream>
#include"utils/common.hpp"
//双重遍历思路
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        auto len=0;
        ListNode *p=head;
        while(p!=nullptr){
            p=p->next;
            len++;
        }
        //删除
        ListNode* del=head;
        ListNode *pre=nullptr;
        for(int i=0;i<len-n;i++){
            pre=del;
            del=del->next;
        }
        if(del==head) {
            ListNode* temp=head->next;
            delete head;
            return temp;
        
        }else {
            ListNode *temp=
            pre->next=del->next;
            return head;
        }
    }
    
};
//双指针思路
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dummyHead=new ListNode();
        ListNode *p=dummyHead,*q=dummyHead;
        dummyHead->next=head;
        int num=0;
        while (1)
        {
            if(num!=(n+1)){//相隔n个，因此要n+1
                q=q->next;
                num++;
            }else if(q!=nullptr){//判断是否为空
                p=p->next;
                q=q->next;
            }else{
                ListNode *temp=p->next;
                p->next=temp->next;
                delete temp;
                break;
            }
        }
        ListNode *retHead=dummyHead->next;
        delete dummyHead;
        return retHead;
    }
    
};
int main()
{
    
}