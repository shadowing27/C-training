#define _CRT_SECURE_NO_WARNINGS 1

//使用C语言写一个程序打印 1~100之间的奇数，要求输出的数字中间加上空格。

#include <stdio.h>
int main()
{
	int i;
	for (i = 1; i < 100; i += 2)
		printf("%d ", i);
	return 0;
}