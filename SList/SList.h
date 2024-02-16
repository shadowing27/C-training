#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//��������ڵ�Ľṹ
typedef int SLDataType;
typedef struct SListNode {
	SLDataType data;
	struct SListNode* next;
}SLNode;

//��ӡ����
void SLPrint(SLNode* phead);

//β��/ͷ��
void SLPushBack(SLNode** pphead, SLDataType x);
void SLPushFront(SLNode** pphead, SLDataType x);

//βɾ/ͷɾ
void SLPopBack(SLNode** pphead);
void SLPopFront(SLNode** pphead);

//�ҽڵ�
SLNode* SLFind(SLNode** pphead, SLDataType x);

//ָ��λ��֮ǰ��������
void SLInsert(SLNode** pphead, SLNode* pos, SLDataType x);
//ָ��λ��֮���������
void SLInsertAfter(SLNode* pos, SLDataType x);
//ɾ��pos�ڵ�
SLErase(SLNode** pphead, SLNode* pos);
//ɾ��pos֮��Ľڵ�
SLEraseAfter(SLNode* pos);

//��������
SLDestory(SLNode** pphead);