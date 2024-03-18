#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//给你一个链表的头节点 head 和一个整数 val ，请你删除链表中所有满足 Node.val == val 的节点，并返回 新的头节点 。

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

//给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。

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

//将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。

//typedef struct ListNode ListNode;
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
//{
//    //两个链表为空的情况
//    if (list1 == NULL)
//        return list2;
//    if (list2 == NULL)
//        return list1;
//    //不为空的情况
//    ListNode* cur1 = list1;
//    ListNode* cur2 = list2;
//    //ListNode* newHead=NULL;
//    //ListNode* newTail=NULL;
//    //创建带头单向不循环空链表，尾插时不需要考虑头结点为空的情况
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

//给你单链表的头结点 head ，请你找出并返回链表的中间结点。
//如果有两个中间结点，则返回第二个中间结点。

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

//环形链表的约瑟夫问题
//编号为 1 到 n 的 n 个人围成一圈。从编号为 1 的人开始报数，报到 m 的人离开。
//下一个人继续从 1 开始报数。
//n - 1 轮结束以后，只剩下一个人，问最后留下的这个人编号是多少？

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
////创建带环链表
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