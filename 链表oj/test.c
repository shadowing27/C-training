#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����һ�������ͷ�ڵ� head ��һ������ val ������ɾ���������������� Node.val == val �Ľڵ㣬������ �µ�ͷ�ڵ� ��

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
//typedef struct ListNode ListNode;
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//    ListNode* pcur = head;
//    ListNode* newHead = NULL;
//    ListNode* newTail = NULL;
//    while (pcur)
//    {
//        if (pcur->val != val)
//        {
//            if (newHead == NULL)
//            {
//                newHead = newTail = pcur;
//            }
//            else
//            {
//                newTail->next = pcur;
//                newTail = pcur;
//            }
//        }
//        pcur = pcur->next;
//    }
//    if (newTail)
//        newTail->next = NULL;
//    return newHead;
//}

//���㵥�����ͷ�ڵ� head �����㷴ת���������ط�ת�������

//typedef struct ListNode ListNode;
//struct ListNode* reverseList(struct ListNode* head) {
//    if (head == NULL)
//        return NULL;
//    ListNode* p1 = NULL;
//    ListNode* p2 = head;
//    ListNode* p3 = head->next;
//    while (p2)
//    {
//        p2->next = p1;
//        p1 = p2;
//        p2 = p3;
//        if (p3)
//        {
//            p3 = p3->next;
//        }
//    }
//    return p1;
//}

//��������������ϲ�Ϊһ���µ� ���� �������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵġ�

//typedef struct ListNode ListNode;
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
//{
//    //��������Ϊ�յ����
//    if (list1 == NULL)
//        return list2;
//    if (list2 == NULL)
//        return list1;
//    //��Ϊ�յ����
//    ListNode* cur1 = list1;
//    ListNode* cur2 = list2;
//    //ListNode* newHead=NULL;
//    //ListNode* newTail=NULL;
//    //������ͷ����ѭ��������β��ʱ����Ҫ����ͷ���Ϊ�յ����
//    ListNode* newHead, * newTail;
//    newHead = newTail = (ListNode*)malloc(sizeof(ListNode));
//    while (cur1 && cur2)
//    {
//        if (cur1->val < cur2->val)
//        {
//            // if(newHead==NULL)
//            // {
//            //     newHead=newTail=cur1;
//            // }
//            // else
//            // {
//            //     newTail->next=cur1;
//            //     newTail=cur1;
//            // }
//            newTail->next = cur1;
//            newTail = cur1;
//            cur1 = cur1->next;
//        }
//        else
//        {
//            // if(newHead==NULL)
//            // {
//            //     newHead=newTail=cur2;
//            // }
//            // else
//            // {
//            //     newTail->next=cur2;
//            //     newTail=cur2;
//            // }
//            newTail->next = cur2;
//            newTail = cur2;
//            cur2 = cur2->next;
//        }
//    }
//    if (cur1)
//        newTail->next = cur1;
//    if (cur2)
//        newTail->next = cur2;
//    ListNode* retHead = newHead->next;
//    free(newHead);
//    return retHead;
//}

//���㵥�����ͷ��� head �������ҳ�������������м��㡣
//����������м��㣬�򷵻صڶ����м��㡣

//typedef struct ListNode ListNode;
//struct ListNode* middleNode(struct ListNode* head)
//{
//    if (head == NULL)
//        return NULL;
//    ListNode* fast = head;
//    ListNode* slow = head;
//    while (fast && fast->next)
//    {
//        slow = slow->next;
//        fast = fast->next->next;
//    }
//    return slow;
//}

//���������Լɪ������
//���Ϊ 1 �� n �� n ����Χ��һȦ���ӱ��Ϊ 1 ���˿�ʼ���������� m �����뿪��
//��һ���˼����� 1 ��ʼ������
//n - 1 �ֽ����Ժ�ֻʣ��һ���ˣ���������µ�����˱���Ƕ��٣�

//typedef struct ListNode ListNode;
//
//ListNode* ListBuyNode(int x)
//{
//    ListNode* node = (ListNode*)malloc(sizeof(ListNode));
//    if (node == NULL)
//    {
//        perror("malloc fail!");
//        exit(1);
//    }
//    node->val = x;
//    node->next = NULL;
//    return node;
//}
//
////������������
//ListNode* CreateList(int n)
//{
//    ListNode* phead = ListBuyNode(1);
//    ListNode* ptail = phead;
//    for (int i = 2; i <= n; i++)
//    {
//        ListNode* node = ListBuyNode(i);
//        ptail->next = node;
//        ptail = ptail->next;
//    }
//    ptail->next = phead;
//    return ptail;
//}
//
//
//int ysf(int n, int m)
//{
//    // write code here
//    ListNode* prev = CreateList(n);
//    ListNode* cur = prev->next;
//    int count = 1;
//    while (cur->next != cur)
//    {
//        if (count == m)
//        {
//            prev->next = cur->next;
//            free(cur);
//            cur = prev->next;
//            count = 1;
//        }
//        else
//        {
//            cur = cur->next;
//            prev = prev->next;
//            count++;
//        }
//    }
//    return cur->val;
//}

int main()
{
	return 0;
}