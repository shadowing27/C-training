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

//a.char�Ĵ��淶Χ -128 ~ 127
//b.unsigned char�Ĵ��淶Χ 0 ~ 255
//c.short�Ĵ��淶Χ -32768 ~ 32767
//d.unsigned short�Ĵ��淶Χ 0 ~ 65535
//e.int�Ĵ��淶Χ -2147483648 ~ 2147483647
//f.unsigned int�Ĵ��淶Χ 0 ~ 4294967295