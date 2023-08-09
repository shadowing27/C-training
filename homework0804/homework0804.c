#define _CRT_SECURE_NO_WARNINGS 1

//递归和非递归分别实现求第n个斐波那契数
//例如：
//输入：5  输出：5
//输入：10， 输出：55
//输入：2， 输出：1

//  非递归
//#include <stdio.h>
//int main()
//{
//	int n = 0, i = 0;
//	int f[1000] = { 0 };
//	f[0] = 1;
//	f[1] = 1;
//	printf("请输入：");
//	scanf("%d", &n);
//	if (n <= 2 && n > 0)
//	{
//		printf("第%d个斐波那契数是%d", n, f[n - 1]);
//	}
//	else if(n>2)
//	{
//		for (i = 2; i < n; i++)
//		{
//			f[i] = f[i - 1] + f[i - 2];
//		}
//		printf("第%d个斐波那契数是%d", n, f[n - 1]);
//	}
//	return 0;
//}
// 
//  递归
//#include <stdio.h>
//int f(int n)
//{
//	int arr[1000] = { 1,1,0 };
//	if (n <= 2 && n > 0)
//		return arr[n - 1];
//	else if (n > 2)
//	{
//		arr[n - 1] = f(n - 1) + f(n - 2);
//		return arr[n - 1];
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入：");
//	scanf("%d", &n);
//	printf("第%d个斐波那契数是%d", n, f(n));
//	return 0;
//}

//编写一个函数实现n的k次方，使用递归实现。

//#include <stdio.h>
//int m(int n, int k)
//{
//	int nk = 1;
//	if (k == 0)
//		return nk;
//	else if (k > 0)
//		nk = n * m(n, k - 1);
//}
//int main()
//{
//	int n = 0, k = 0;
//	printf("请输入：");
//	scanf("%d %d", &n, &k);
//	printf("%d的%d次方为%d", n, k, m(n, k));
//	return 0;
//}