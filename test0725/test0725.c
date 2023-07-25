#define _CRT_SECURE_NO_WARNINGS 1

//请输出所有的"水仙花数"。
//所谓"水仙花数"是指一个3位数, 其各位数字立方和等于该数本身。
//例如, 153是水仙花数, 因为153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3

#include <stdio.h>
int main()
{
	int a, b, c, n = 0;
	for (a = 1; a < 10; a++)//因为是三位数所以第一位数字从1开始
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				n = a * 100 + b * 10 + c;
				if ((a * a * a) + (b * b * b) + (c * c * c) == n)
					printf("%d ", n);
			}
		}
	}
	return 0;
}