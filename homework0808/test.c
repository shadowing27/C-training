#define _CRT_SECURE_NO_WARNINGS 1

//打印整数二进制的奇数位和偶数位

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr1[16] = { 0 };
//	int arr2[16] = { 0 };
//	int i = 0, a = 0, b = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((i + 1) % 2 == 1)
//		{
//			arr1[a] = (n % 2) & 1;
//			a++;
//		}
//		else
//		{
//			arr2[b] = (n % 2) & 1;
//			b++;
//		}
//		n = n >> 1;
//	}
//	printf("奇数位序列为：");
//	for (i = 15; i >= 0; i--)
//		printf("%d", arr1[i]);
//	printf("\n偶数位序列为：");
//	for (i = 15; i >= 0; i--)
//		printf("%d", arr2[i]);
//	return 0;
//}

//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7

#include <stdio.h>
int main()
{
	int m = 0, n = 0;
	scanf("%d %d", &m, &n);
	int temp = m ^ n;
	int i = 0, x = 0;
	for (i = 0; i < 32; i++)
	{
		if ((temp % 2) & 1 == 1)
			x++;
		temp = temp >> 1;
	}
	printf("%d", x);
	return 0;
}