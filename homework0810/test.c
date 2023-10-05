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

//#include <stdio.h>
//void func(int* arr)
//{
//	int i = 0, j = 0;
//	int a = 0, b = 0;
//	int temp1[10] = { 0 };
//	int temp2[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] % 2 == 1)
//		{
//			temp1[a] = arr[i];
//			a++;
//		}
//		else
//		{
//			temp2[b] = arr[i];
//			b++;
//		}
//	}
//	for(i=0;i<10;i++)
//	{
//		if (i < a)
//			arr[i] = temp1[i];
//		else
//			arr[i] = temp2[i-a];
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", arr + i);
//	}
//	func(arr);
//	return 0;
//}

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。

//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.

//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

#include <string.h>
#include <stdio.h>
int judge(char* str1,char* str2)
{
	//判断两个字符串长度是否相同
	int len1 = strlen(str1), len2 = strlen(str2);
	if(len1!=len2)
		return 0;
	else
	{
		//str1逐字符与str比较 ^=0时比较下一字符
		int i = 0, j = 0;
		for (i = 0; i < len1; i++)
		{
			if ((str1[i] ^ str2[j]) == 0)
				j++;
			if (j >= len2)
				break;
		}
		int temp = j;
		if(temp<len2)
		{
			for (i = 0; i < len1-1-temp; i++)
			{
				if ((str1[i] ^ str2[j]) == 0)
					j++;
				if (j >= len2)
					break;
			}
		}
		if (j < len2 - 1)
			return 0;
		else
			return 1;
	}
	
}
int main()
{
	char str1[10] = { 0 };
	char str2[10] = { 0 };
	scanf("%s %s", str1, str2);
	printf("%d\n", judge(str1, str2));
	return 0;
}