#define _CRT_SECURE_NO_WARNINGS 1

//请实现以下三个数组操作的函数：
//1. 请实现GetMaxValOfArray函数，该函数接收一个整形数组，及元素个数，功能求数组中元素最大值并返回
//2. 请实现GetMinValOfArray函数，该函数接收一个整形数组，及元素个数，功能求数组中元素最小值并返回
//3. 请实现函数PrintArray，打印数组中所有元素

#include <stdio.h>
int max(int arr[],int sz)
{
	int i = 0, max = arr[0];
	for (i = 0; i < sz; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
int min(int arr[], int sz)
{
	int i = 0, min = arr[0];
	for (i = 0; i < sz; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}
int print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("数组中元素最大值为%d\n", max(arr, sz));
	printf("数组中元素最小值为%d\n", min(arr, sz));
	print(arr, sz);
	printf("\n");
	return 0;
}