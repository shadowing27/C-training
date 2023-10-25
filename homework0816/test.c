#define _CRT_SECURE_NO_WARNINGS 1

//模仿qsort的功能实现一个通用的冒泡排序

#include <stdio.h>
#include <string.h>

void swap(char* e1,char* e2,size_t width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}

void bubble_sort(void* base, size_t sz, size_t width, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void print_arr(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void test1()
{
	int arr[] = { 1,3,2,5,4,8,7,6,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr,sz);
}

struct Stu
{
	char name[20];
	int age;
};

int cmp_stu_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int cmp_stu_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test2()
{
	struct Stu arr2[] = { {"a",15}, {"h",27},{"c",18} };
	int sz = sizeof(arr2) / sizeof(arr2[0]);
	//bubble_sort(arr2, sz, sizeof(arr2[0]), cmp_stu_age);
	bubble_sort(arr2, sz, sizeof(arr2[0]), cmp_stu_name);
}

int main()
{
	test1();
	//test2();
	return 0;
}