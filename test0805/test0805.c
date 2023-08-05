#define _CRT_SECURE_NO_WARNINGS 1

//请实现函数: int isPowerOfTwo(unsigned int n)。该函数接收一个非负数n，请判断n是否为2的幂次方。
//如果是返回真；否则返回假。为简单起见，不考虑n为负数的情况。如果存在一个整数X使得x  = 2 ^ n，则认为n是2的幂次方

#include <stdio.h>
int isPowerOfTwo(unsigned int n)
{
	while (n % 2 == 0 && n > 2)
	{
		n = n / 2;
	}
	if (n == 2)
		return 1;
	else
		return 0;
}
int main()
{
	unsigned int n = 0;
	printf("请输入：");
	scanf("%d", &n);
	if (isPowerOfTwo(n) == 1)
		printf("%d是2的幂次方", n);
	else
		printf("%d不是2的幂次方", n);
	return 0;
}