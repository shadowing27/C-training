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