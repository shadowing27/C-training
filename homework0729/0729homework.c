#define _CRT_SECURE_NO_WARNINGS 1

//ɨ�׼���һ�ļ�

//���ֲ��Һ���
//��һ�����������в���ָ������ֵ���ҵ��˾ͷ����±꣬�Ҳ����ͷ��� - 1

#include <stdio.h>
int search(int arr[10],int n)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] == n)
		{
			return i;
			break;
		}
	}
	if (i >= 10)
		return -1;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("������Ҫ���ҵ���ֵ��");
	int n = 0;
	scanf("%d", &n);
	if (search(arr, n) != -1)
		printf("����ֵ���±�Ϊ%d\n", search(arr, n));
	else
		printf("���ҵ���ֵ���ڸ�������\n");
	return 0;
}