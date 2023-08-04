#define _CRT_SECURE_NO_WARNINGS 1

//兔子繁殖问题：假定一对大兔子每月能生一对小兔子，且每对新生的小兔子经过一个月可以长成一对大兔子, 具备繁殖能力，
//如果不发生死亡，且每次均生下一雌一雄，问一年后共有多少对兔子？

#include <stdio.h>
int rabbit(int n)
{
	if (n < 3)
		return 1;
	else
		return rabbit(n - 1) + rabbit(n - 2);
}
int main()
{
	int sum = 0;
	sum = rabbit(12);
	printf("一年后共有%d对兔子\n", sum);
	return 0;
}