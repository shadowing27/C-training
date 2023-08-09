#define _CRT_SECURE_NO_WARNINGS 1

//有一个升序数组nums，给一个数字data，将data插入数组nums中仍旧保证nums升序，返回数组中有效元素个数。
//比如：nums[100] = { 1, 2, 3, 5, 6, 7, 8, 9 }  size = 8   value = 4
//插入之后，nums为{1, 2, 3, 4, 5, 6, 7, 8, 9}
//返回9

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
	printf("数组中有效元素个数为%d,插入之后的数组如下：\n", value);
	for (i = 0; i < value; i++)
		printf("%d ", nums[i]);
	return 0;
}