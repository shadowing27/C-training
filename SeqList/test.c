#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

void SLtest()
{
	SL s1;
	SLInit(&s1);
	//尾插
	SLPushBack(&s1, 1);
	SLPushBack(&s1, 2);
	SLPushBack(&s1, 3);
	SLPushBack(&s1, 4);
	SLPrint(&s1);
	////头插
	//SLPushFront(&s1, 5);
	//SLPushFront(&s1, 6);
	//SLPushFront(&s1, 7);
	//SLPrint(&s1);
	////尾删
	//SLPopBack(&s1);
	//SLPrint(&s1);
	////头删
	//SLPopFront(&s1);
	//SLPrint(&s1);
	//指定位置插入
	SLInsert(&s1, s1.size, 11);
	SLPrint(&s1);
	//指定位置删除
	SLErase(&s1, s1.size);
	SLPrint(&s1);
	//bool findRet = SLFind(&s1, 3);
	//if (findRet)
	//	printf("找到了\n");
	//else
	//	printf("没找到\n");

	SLDestory(&s1);
}

int main()
{
	SLtest();
	return 0;
}