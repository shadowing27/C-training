#define _CRT_SECURE_NO_WARNINGS 1

//扫雷见另一文件

//二分查找函数
//在一个升序数组中查找指定的数值，找到了就返回下标，找不到就返回 - 1

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
	printf("请输入要查找的数值：");
	int n = 0;
	scanf("%d", &n);
	if (search(arr, n) != -1)
		printf("该数值的下标为%d\n", search(arr, n));
	else
		printf("查找的数值不在该数组内\n");
	return 0;
}