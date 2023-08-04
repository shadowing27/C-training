#define _CRT_SECURE_NO_WARNINGS 1

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）。

#include <stdio.h>
int main()
{
	int x = 20, y = 20, temp = 0;
	while (x / 2 > 0)
	{
		x = x / 2;
		y = y + x;
		if (x % 2 == 1)
			temp++;
		if (temp == 2)
			y++;
	}
	printf("可以喝%d瓶汽水\n", y);
	return 0;
}

//打印菱形

//#include <stdio.h>
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 0; i < 13; i++)
//	{
//		if (i <= 13 / 2)
//		{
//			for (j = 0; j < 6 - i; j++)
//				printf(" ");
//			for (j = 0; j < 2 * i + 1; j++)
//				printf("*");
//		}
//		else
//		{
//			for (j = 0; j < i - 6; j++)
//				printf(" ");
//			for (j = 0; j < 25 - 2 * i; j++)
//				printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。

//#include <stdio.h>
//int main()
//{
//	int num = 0, n = 0, m = 0, sum = 0;
//	for (num = 0; num <= 100000; num++)
//	{
//		n = num;
//		if (num < 10)
//		{
//			m = n;
//			sum = sum + m;
//		}
//		else if (num >= 10 && num < 100)
//		{
//				m = n % 10;
//				n = n / 10;
//				sum = m * m + n * n;
//		}
//		else if (num >= 100 && num < 1000)
//		{
//			while (n / 10 > 0)
//			{
//				m = n % 10;
//				sum = sum + m * m * m;
//				n = n / 10;
//			}
//			if (n < 10 && n>0)
//				sum = sum + n * n * n;
//		}
//		else if (num >= 1000 && num < 10000)
//		{
//			while (n / 10 > 0)
//			{
//				m = n % 10;
//				sum = sum + m * m * m * m;
//				n = n / 10;
//			}
//			if (n < 10 && n>0)
//				sum = sum + n * n * n * n;
//		}
//		if (sum == num)
//			printf("%d ", num);
//		sum = 0;
//	}
//	return 0;
//}

//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222

//#include<stdio.h>
//int main()
//{
//    long s = 1, t = 1;
//    int i, a;
//    scanf("%d", &a);
//    for (i = 1; i < 5; i++)
//    {
//        t = t * 10 + 1;
//        s = s + t;
//    }
//    s = s * a;
//    printf("%ld\n", s);
//    return 0;
//}