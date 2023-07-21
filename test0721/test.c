#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(short int));
	printf("%d\n", sizeof(long int));
	printf("%d\n", sizeof(unsigned char));
	printf("%d\n", sizeof(unsigned short));
	printf("%d\n", sizeof(unsigned int));
	printf("%d\n", sizeof(unsigned long));
	printf("%d\n", sizeof(unsigned long long));
	return 0;
}

//a.charµÄ´¢´æ·¶Î§ -128 ~ 127
//b.unsigned charµÄ´¢´æ·¶Î§ 0 ~ 255
//c.shortµÄ´¢´æ·¶Î§ -32768 ~ 32767
//d.unsigned shortµÄ´¢´æ·¶Î§ 0 ~ 65535
//e.intµÄ´¢´æ·¶Î§ -2147483648 ~ 2147483647
//f.unsigned intµÄ´¢´æ·¶Î§ 0 ~ 4294967295