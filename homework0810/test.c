#define _CRT_SECURE_NO_WARNINGS 1

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣

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

//ʵ��һ�������������ð������

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

//��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

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

//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����

//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.

//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC

#include <string.h>
#include <stdio.h>
int judge(char* str1,char* str2)
{
	//�ж������ַ��������Ƿ���ͬ
	int len1 = strlen(str1), len2 = strlen(str2);
	if(len1!=len2)
		return 0;
	else
	{
		//str1���ַ���str�Ƚ� ^=0ʱ�Ƚ���һ�ַ�
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