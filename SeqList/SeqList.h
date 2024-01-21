#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

//动态顺序表
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* a; //相当于数组名
	int size;    //有效数据个数
	int capacity;//空间大小
}SL;

//顺序表初始化和销毁
void SLInit(SL* ps);
void SLDestory(SL* ps);

//头插/尾插 头删/尾删
void SLPushBack(SL* ps, SLDataType x);
void SLPushFront(SL* ps, SLDataType x);
void SLPopBack(SL* ps);
void SLPopFront(SL* ps);

void SLPrint(SL* ps);
bool SLIsEmpty(SL* ps);

//在指定位置前插入/删除数据
void SLInsert(SL* ps, int pos, SLDataType x);
void SLErase(SL* ps, int pos);

bool SLFind(SL* ps, SLDataType x);