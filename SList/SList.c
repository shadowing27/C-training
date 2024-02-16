#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

void SLPrint(SLNode* phead)
{
	SLNode* pcur = phead;
	while (pcur)
	{
		printf("%d -> ", pcur->data);
		pcur = pcur->next;
	}
	printf("NULL\n");
}

SLNode* SLBuyNode(SLDataType x)
{
	SLNode* node = (SLNode*)malloc(sizeof(SLNode));
	node->data = x;
	node->next = NULL;
	return node;
}

void SLPushBack(SLNode** pphead, SLDataType x)
{
	assert(pphead);
	SLNode* node = SLBuyNode(x);
	//����Ϊ��
	if (*pphead == NULL)
	{
		*pphead = node;
		return;
	}
	//����Ϊ�գ���β
	SLNode* pcur = *pphead;
	while (pcur->next)
	{
		pcur = pcur->next;
	}
	pcur->next = node;
}

void SLPushFront(SLNode** pphead, SLDataType x)
{
	assert(pphead);
	SLNode* node = SLBuyNode(x);
	node->next = *pphead;
	*pphead = node;
}

void SLPopBack(SLNode** pphead)
{
	assert(pphead);
	assert(*pphead);//��һ���ڵ㲻��Ϊ��
	//ֻ��һ���ڵ�����
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		//�ж���ڵ�ʱ��β�ڵ�͵����ڶ����ڵ�
		SLNode* ptail = *pphead;
		SLNode* prev = NULL;
		while (ptail->next != NULL)
		{
			prev = ptail;
			ptail = ptail->next;
		}
		prev->next = NULL;
		free(ptail);
		ptail = NULL;
	}
}

void SLPopFront(SLNode** pphead)
{
	assert(pphead);
	assert(*pphead);
	SLNode* del = *pphead;
	*pphead = (*pphead)->next;
	free(del);
	del = NULL;
}

SLNode* SLFind(SLNode** pphead, SLDataType x)
{
	assert(pphead);
	SLNode* pcur = *pphead;
	while (pcur)
	{
		if (pcur->data == x)
			return pcur;
		else
			pcur = pcur->next;
	}
	return NULL;
}

void SLInsert(SLNode** pphead, SLNode* pos, SLDataType x)
{
	assert(pphead);
	//�����pos����Ϊ��
	assert(*pphead);
	assert(pos);
	SLNode* node = SLBuyNode(x);
	//pos��ͷ�ڵ�
	if (pos == *pphead)
	{
		node->next = *pphead;
		*pphead = node;
	}
	else
	{
		SLNode* pcur = *pphead;
		while (pcur->next != pos)
		{
			pcur = pcur->next;
		}
		pcur->next = node;
		node->next = pos;
	}
}

void SLInsertAfter(SLNode* pos, SLDataType x)
{
	assert(pos);
	SLNode* node = SLBuyNode(x);
	node->next = pos->next;
	pos->next = node;
}

SLErase(SLNode** pphead, SLNode* pos)
{
	assert(pphead);
	assert(*pphead);
	assert(pos);
	//posΪͷ�ڵ�
	if (pos == *pphead)
	{
		*pphead = pos->next;
		free(pos);
		pos = NULL;
	}
	else
	{
		SLNode* pcur = *pphead;
		while (pcur->next != pos)
		{
			pcur = pcur->next;
		}
		pcur->next = pos->next;
		free(pos);
		pos = NULL;
	}
}

SLEraseAfter(SLNode* pos)
{
	assert(pos && pos->next);
	SLNode* del = pos->next;
	pos->next = del->next;
	free(del);
	del = NULL;
}

SLDestory(SLNode** pphead)
{
	assert(*pphead);
	SLNode* del = *pphead;
	while (del)
	{
		SLNode* next = del->next;
		free(del);
		del = next;
	}
	*pphead = NULL;
}