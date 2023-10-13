#define _CRT_SECURE_NO_WARNINGS 1

//杨氏矩阵

//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。

//要求：时间复杂度小于O(N);
#include <stdio.h>
//void search(int arr[3][5],int r,int c,int x)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < r; i++)
//	{
//		if (x > arr[i][c - 1])//跟每一行最后一个元素比大小
//			continue;         //大于就跟下一行比较
//		else
//			break;            //小于等于时跳出循环，在该行内查找
//	}
//	if (i < r)                //若i>=r即输入的数字比矩阵的最后一个数字还要大，可直接判断为不存在
//	{
//		for (j = c - 1; j >= 0; j--)//从该行最后一个数起向前查找
//		{
//			if (x < arr[i][j])      //小于便继续
//				continue;
//			else if (x == arr[i][j])//找到数字时跳出循环
//				break;
//		}
//		if (j < 0)                  //判断循环进行了多少次，n+1次即为没找到
//			printf("该数字不存在");
//		else
//			printf("该数字存在");    //n次以内即为找到
//	}
//	else
//		printf("该数字不存在");
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{7,8,9,10,11},{8,9,10,11,12} };
//	int x = 0;
//	scanf("%d", &x);
//	search(arr, 3, 5, x);
//	return 0;
//}

//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//
//以下为4个嫌疑犯的供词:
//
//A说：不是我
//B说：是C
//C说：是D
//D说：C在胡说  
//已知3个人说了真话，1个人说的是假话。
//
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

//#include <stdio.h>
//int main()
//{
//	char k = 0;
//	for (k = 'A'; k <= 'D'; k++)
//	{
//		if ((k != 'A') + (k == 'C') + (k == 'D') + (k != 'D') == 3)
//			break;
//	}
//	printf("凶手是%c\n", k);
//	return 0;
//}

//在屏幕上打印杨辉三角。

#include <stdio.h>
int main()
{
	int arr[10][10] = { 0 };
	arr[0][0] = 1;
	arr[1][0] = 1;
	arr[1][1] = 1;
	int i = 0, j = 0;
	for (i = 2; i < 10; i++)
	{
		arr[i][0] = 1;
		for (j = 1; j < i; j++)
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		arr[i][i] = 1;
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
			printf("%3d ", arr[i][j]);
		printf("\n");
	}
	printf("......");
	return 0;
}