#define _CRT_SECURE_NO_WARNINGS 1

//将课堂上所讲使用函数指针数组实现转移表的代码，自己实践后，并提交代码到答案窗口。

//#include <stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("***************************\n");
//	printf("****** 1. add 2. sub ******\n");
//	printf("****** 3. mul 4. div ******\n");
//	printf("****** 0. exit       ******\n");
//	printf("***************************\n");
//}
//int main()
//{
//	int input = 0, x = 0, y = 0, ret = 0;
//	int (*pfArr[])(int, int) = {0,add,sub,mul,div};
//	do
//	{
//		menu();
//		printf("请输入：");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入要计算的两个数：");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//		}
//	} while (input);
//	return 0;
//}

//练习使用库函数，qsort排序各种类型的数据

//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void print_arr(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//void test1()
//{
//	int arr[] = { 2,3,1,5,6,4,8,7,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。
//
//例如：
//有数组的元素是：1，2，3，4，5，1，2，3，4，6
//只有5和6只出现1次，要找出5和6.

//#include <stdio.h>
//#include <stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void search(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == arr[i + 1])
//		{
//			i++;
//			continue;
//		}
//		else
//			printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	search(arr, sz);
//	return 0;
//}

//BC54 获得月份天数
//
//描述
//KiKi想获得某年某月有多少天，请帮他编程实现。输入年份和月份，计算这一年这个月有多少天。
//输入描述：
//多组输入，一行有两个整数，分别表示年份和月份，用空格分隔。
//输出描述：
//针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天。

#include <stdio.h>

int main()
{
    int year = 0, month = 0;
    while ((scanf("%d %d", &year, &month) != EOF))
    {
        switch (month)
        {
        case 2:
            if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
            {
                printf("29\n");
                break;
            }
            else
            {
                printf("28\n");
                break;
            }
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30\n");
            break;
        }
    }
    return 0;
}