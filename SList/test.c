#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

//void slttest()
//{
//	SLNode* node1 = (SLNode*)malloc(sizeof(SLNode));
//	node1->data = 1;
//	SLNode* node2 = (SLNode*)malloc(sizeof(SLNode));
//	node2->data = 2;
//	SLNode* node3 = (SLNode*)malloc(sizeof(SLNode));
//	node3->data = 3;
//	SLNode* node4 = (SLNode*)malloc(sizeof(SLNode));
//	node4->data = 4;
//
//	node1->next = node2;
//	node2->next = node3;
//	node3->next = node4;
//	node4->next = NULL;
//
//	SLNode* plist = node1;
//	SLPrint(plist);
//}

void slttest01()
{
	SLNode* plist = NULL;
	//尾插
	//SLPushBack(&plist, 1);
	//SLPushBack(&plist, 2);
	//SLPushBack(&plist, 3);
	//SLPushBack(&plist, 4);
	//SLPrint(plist);
	//头插
	SLPushFront(&plist, 1);
	SLPushFront(&plist, 2);
	SLPushFront(&plist, 3);
	SLPushFront(&plist, 4);
	SLPrint(plist);
	//尾删
	//SLPopBack(&plist);
	//SLPopBack(&plist);
	//SLPopBack(&plist);
	//SLPopBack(&plist);
	//SLPrint(plist);
	//头删
	//SLPopFront(&plist);
	//SLPrint(plist);
	SLNode* find = SLFind(&plist, 2);
	//指定位置前插入
	//SLInsert(&plist, find, 10);
	//指定位置后插入
	//SLInsertAfter(find, 10);
	//删除pos节点
	//SLErase(&plist, find);
	//删除pos之后的节点
	//SLEraseAfter(find);
	//销毁链表
	SLDestory(&plist);
	SLPrint(plist);
}

int main()
{
	//slttest();
	slttest01();
	return 0;
}