#define _CRT_SECURE_NO_WARNINGS 1

//打印1 - 100之间所有3的倍数的数字

//#include <stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//写代码将三个整数数按从大到小输出。
//例如：
//输入：2 3 1
//输出：3 2 1

//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0, n = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		n = b;
//		b = a;
//		a = n;
//		if (b < c)
//		{
//			n = c;
//			c = b;
//			b = n;
//			if (a < b)
//			{
//				n = b;
//				b = a;
//				a = n;
//			}
//		}
//	}
//	else
//	{
//		if (b < c)
//		{
//			n = c;
//			c = b;
//			b = n;
//		}
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

#include <stdio.h>
int main()
{
	int a = 2;
	int b = 3;
	int c = 1;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("a=%d b=%d c=%d\n", a, b, c);
	return 0;
}