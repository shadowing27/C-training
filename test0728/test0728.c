#define _CRT_SECURE_NO_WARNINGS 1

//��ʵ������������������ĺ�����
//1. ��ʵ��GetMaxValOfArray�������ú�������һ���������飬��Ԫ�ظ�����������������Ԫ�����ֵ������
//2. ��ʵ��GetMinValOfArray�������ú�������һ���������飬��Ԫ�ظ�����������������Ԫ����Сֵ������
//3. ��ʵ�ֺ���PrintArray����ӡ����������Ԫ��

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
	printf("������Ԫ�����ֵΪ%d\n", max(arr, sz));
	printf("������Ԫ����СֵΪ%d\n", min(arr, sz));
	print(arr, sz);
	printf("\n");
	return 0;
}