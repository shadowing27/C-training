#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

//��̬˳���
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* a; //�൱��������
	int size;    //��Ч���ݸ���
	int capacity;//�ռ��С
}SL;

//˳����ʼ��������
void SLInit(SL* ps);
void SLDestory(SL* ps);

//ͷ��/β�� ͷɾ/βɾ
void SLPushBack(SL* ps, SLDataType x);
void SLPushFront(SL* ps, SLDataType x);
void SLPopBack(SL* ps);
void SLPopFront(SL* ps);

void SLPrint(SL* ps);
bool SLIsEmpty(SL* ps);

//��ָ��λ��ǰ����/ɾ������
void SLInsert(SL* ps, int pos, SLDataType x);
void SLErase(SL* ps, int pos);

bool SLFind(SL* ps, SLDataType x);