#define _CRT_SECURE_NO_WARNINGS 1

//ģ��ʵ�ֿ⺯��strlen

//#include <stdio.h>
//int myStrlen(char *str)//��ʽ1
//{
//	int len = 0;
//	while (*str != '\0')
//	{
//		len++;
//		str++;
//	}
//	return len;
//}
//int main()
//{
//	char str[] = { "abcdef" };
//	int len = myStrlen(str);
//	printf("%d \n", len);
//	return 0;
//}

//#include <stdio.h>
//int myStrlen(char* str)//��ʽ2
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	char str[] = { "abcdef" };
//	int len = myStrlen(str);
//	printf("%d \n", len);
//	return 0;
//}

//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

//#include <stdio.h>
//void left(char str[], int k)
//{
//	char* pc = str;
//	while (*(pc + k) != '\0')
//	{
//		printf("%c", *(pc + k));
//		pc++;
//	}
//	pc = str;
//	while (pc < str + k)
//	{
//		printf("%c", *pc);
//		pc++;
//	}
//}
//int main()
//{
//	char str[50] = { 0 };
//	int k = 0;
//	scanf("%s %d", &str,&k);
//	left(str, k);
//	return 0;
//}

//дһ����������������һ���ַ��������ݡ�

#include <stdio.h>
#include <string.h>

void turn(char str[])
{
	int sz = strlen(str);
	char* end = str + sz - 1;
	char* start = str;
	while (end >= start)
	{
		printf("%c", *end);
		end--;
	}
}
int main()
{
	char str[10000] = { 0 };
	gets(str);
	turn(str);
	return 0;
}