#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

void SLtest()
{
	SL s1;
	SLInit(&s1);
	//β��
	SLPushBack(&s1, 1);
	SLPushBack(&s1, 2);
	SLPushBack(&s1, 3);
	SLPushBack(&s1, 4);
	SLPrint(&s1);
	////ͷ��
	//SLPushFront(&s1, 5);
	//SLPushFront(&s1, 6);
	//SLPushFront(&s1, 7);
	//SLPrint(&s1);
	////βɾ
	//SLPopBack(&s1);
	//SLPrint(&s1);
	////ͷɾ
	//SLPopFront(&s1);
	//SLPrint(&s1);
	//ָ��λ�ò���
	SLInsert(&s1, s1.size, 11);
	SLPrint(&s1);
	//ָ��λ��ɾ��
	SLErase(&s1, s1.size);
	SLPrint(&s1);
	//bool findRet = SLFind(&s1, 3);
	//if (findRet)
	//	printf("�ҵ���\n");
	//else
	//	printf("û�ҵ�\n");

	SLDestory(&s1);
}

int main()
{
	SLtest();
	return 0;
}