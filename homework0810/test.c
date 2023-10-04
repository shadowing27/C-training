#define _CRT_SECURE_NO_WARNINGS 1

//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。

//#include <stdio.h>
//void print(int* arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//实现一个对整形数组的冒泡排序

//#include <stdio.h>
//void bubble(int* arr, int sz)
//{
//	int i = 0, j = 0;
//	for (i = sz - 1; i > 0; i--)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,5,3,4,6,7,9,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble(arr, sz);
//	return 0;
//}

//调整数组使奇数全部都位于偶数前面。
//
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

#include <stdio.h>
void func(int* arr)
{
	int i = 0, j = 0;
	int odd = 0;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 1)
			odd++;
	}
	for (i = 0; i < odd; i++)
	{
		if (arr[i] % 2 == 1)
			continue;

	}




	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(arr + i));
	}
}
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", arr + i);
	}
	func(arr);
	return 0;
}