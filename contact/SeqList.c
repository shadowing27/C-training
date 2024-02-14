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
	//扩容
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
	//空间不够时先扩容再尾插
	SLCheckCapacity(ps);
	//空间足够时直接尾插
	ps->a[ps->size++] = x;
}

void SLPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	//空间不够时先扩容再头插
	SLCheckCapacity(ps);
	//空间足够时直接头插，数据后移一位
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
	//判断顺序表是否为空
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
	//将pos位置以后的数据后移一位
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