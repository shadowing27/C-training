#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//定义链表节点的结构
typedef int SLDataType;
typedef struct SListNode {
	SLDataType data;
	struct SListNode* next;
}SLNode;

//打印链表
void SLPrint(SLNode* phead);

//尾插/头插
void SLPushBack(SLNode** pphead, SLDataType x);
void SLPushFront(SLNode** pphead, SLDataType x);

//尾删/头删
void SLPopBack(SLNode** pphead);
void SLPopFront(SLNode** pphead);

//找节点
SLNode* SLFind(SLNode** pphead, SLDataType x);

//指定位置之前插入数据
void SLInsert(SLNode** pphead, SLNode* pos, SLDataType x);
//指定位置之后插入数据
void SLInsertAfter(SLNode* pos, SLDataType x);
//删除pos节点
SLErase(SLNode** pphead, SLNode* pos);
//删除pos之后的节点
SLEraseAfter(SLNode* pos);

//销毁链表
SLDestory(SLNode** pphead);