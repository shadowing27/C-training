#define _CRT_SECURE_NO_WARNINGS 1

//��һ����������nums����һ������data����data��������nums���Ծɱ�֤nums���򣬷�����������ЧԪ�ظ�����
//���磺nums[100] = { 1, 2, 3, 5, 6, 7, 8, 9 }  size = 8   value = 4
//����֮��numsΪ{1, 2, 3, 4, 5, 6, 7, 8, 9}
//����9

#include <stdio.h>
int InsertData(int nums[], int size, int data)
{
	int value = 0, i = 0, j = 0;
	for (i = 0; i < size; i++)
	{
		if (nums[i] > data)
		{
			for (j = size; j > i; j--)
				nums[j] = nums[j - 1];
			nums[i] = data;
			break;
		}
	}
	i = 0;
	while (nums[i] != 0)
	{
		value++;
		i++;
	}
	return value;
}
int main()
{
	int nums[100] = { 1, 2, 3, 5, 6, 7, 8, 9 };
	int size = 0, data = 4, i = 0;
	while (nums[i] != 0)
	{
		size++;
		i++;
	}
	int value = InsertData(nums, size, data);
	printf("��������ЧԪ�ظ���Ϊ%d,����֮����������£�\n", value);
	for (i = 0; i < value; i++)
		printf("%d ", nums[i]);
	return 0;
}