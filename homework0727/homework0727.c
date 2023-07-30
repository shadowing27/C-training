#define _CRT_SECURE_NO_WARNINGS 1

//编写一个程序，从用户输入中读取10个整数并存储在一个数组中。然后，计算并输出这些整数的平均值。

//#include <stdio.h>
//int main()
//{
//	int arr[10];
//	int i = 0, sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//	printf("这些整数的平均值是%.2f\n", sum / 10.0f);
//	return 0;
//}

//猜数字游戏

//#include <stdlib.h>
//#include <stdio.h>
//#include <time.h>
//void menu()
//{
//	printf("**************************\n");
//	printf("******** 1. start ********\n");
//	printf("******** 0. exit  ********\n");
//	printf("**************************\n");
//}
//void game()
//{
//	int num = rand() % 100 + 1;
//	int guess = 0;
//	int count = 5;
//	while (count)
//	{
//		printf("\n你还有%d次机会\n",count);
//		printf("请猜数字:");
//		scanf("%d", &guess);
//		if (guess == num)
//		{
//			printf("恭喜！猜对了！\n\n");
//			break;
//		}
//		else if (guess < num)
//		{
//			printf("猜小了，请重试\n");
//		}
//		else if (guess > num)
//		{
//			printf("猜大了，请重试\n");
//		}
//		count--;
//	}
//	if (count == 0)
//		printf("\n机会已用完，正确答案是%d\n\n",num);
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do {
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("\n--------END--------\n");
//			break;
//		default:
//			printf("error!请重新选择\n\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//BC107 - 矩阵转置

//#include <stdio.h>
//int main()
//{
//    int arr1[10][10] = { 0 };
//    int arr2[10][10] = { 0 };
//    int n = 0, m = 0, i = 0, j = 0, temp = 0;
//    scanf("%d %d", &n, &m);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            arr2[i][j] = arr1[j][i];
//            printf("%d ", arr2[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）

//#include <stdio.h>
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int b[5] = { 9,8,7,6,5 };
//	int i = 0, temp = 0;
//	printf("交换前：\n");
//	printf("数组A:");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n数组B:");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//	printf("\n交换后：\n");
//	printf("数组A:");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n数组B:");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	return 0;
//}

//给定两个数，求这两个数的最大公约数
//例如：
//输入：20 40
//输出：20

//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0, min = 0, i = 0;
//	scanf("%d %d", &a, &b);
//	if (a < b)
//		min = a;
//	else
//		min = b;
//	for (i = min; i > 0; i--)
//	{
//		if ((a % i) == 0 && (b % i) == 0)
//			break;
//	}
//	printf("最大公约数为%d", i);
//	return 0;
//}

//打印1000年到2000年之间的闰年

#include <stdio.h>
int main()
{
	int i = 0;
	printf("1000年到2000年之间的闰年:\n");
	for (i = 1000; i <= 2000; i += 4)
	{
		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
			printf("%d ", i);
	}
	return 0;
}