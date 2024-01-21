#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"
void SLInit(SL* ps)
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SLDestory(SL* ps)
{
	if (ps->a)
		free(ps->a);
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SLCheckCapacity(SL* ps)
{
	//����
	if (ps->size == ps->capacity)
	{
		int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newCapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			perror("realloc fail!");
			return 1;
		}
		ps->a = tmp;
		ps->capacity = newCapacity;
	}
}

void SLPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	//�ռ䲻��ʱ��������β��
	SLCheckCapacity(ps);
	//�ռ��㹻ʱֱ��β��
	ps->a[ps->size++] = x;
}

void SLPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	//�ռ䲻��ʱ��������ͷ��
	SLCheckCapacity(ps);
	//�ռ��㹻ʱֱ��ͷ�壬���ݺ���һλ
	for (size_t i = ps->size; i > 0; i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[0] = x;
	ps->size++;

}

void SLPopBack(SL* ps)
{
	assert(ps);
	//�ж�˳����Ƿ�Ϊ��
	assert(!SLIsEmpty(ps));
	ps->size--;
}

void SLPopFront(SL* ps)
{
	assert(ps);
	assert(!SLIsEmpty(ps));
	for (size_t i = 0; i < ps->size - 1; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}

void SLPrint(SL* ps)
{
	for (size_t i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

bool SLIsEmpty(SL* ps)
{
	assert(ps);
	return ps->size == 0;
}

void SLInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	SLCheckCapacity(ps);
	//��posλ���Ժ�����ݺ���һλ
	for (int i = ps->size; i > pos; i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[pos] = x;
	ps->size++;
}

void SLErase(SL* ps, int pos)
{
	assert(ps);
	assert(!SLIsEmpty(ps));
	assert(pos >= 0 && pos <= ps->size);
	for (int i = pos; i < ps->size - 1; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}

//bool SLFind(SL* ps, SLDataType x)
//{
//	assert(ps);
//	for (int i = 0; i < ps->size; i++)
//	{
//		if (ps->a[i] == x)
//			return true;
//	}
//	return false;
//}