#define _CRT_SECURE_NO_WARNINGS 1

//编写一个函数void StatCharCount(char str[])，该函数接收一个字符串作为参数，请统计该字符串中字母、数字、空格和其他字符的个数，
//在main函数调用该函数，分别打印字母、数字、空格 和 其他字符的出现次数。
//返回提示：一个函数只能返回一个值，此处的统计结果有4个，因此返回结果可以使用全局变量带出来。

#include <stdio.h>
#include <string.h>

int letter = 0, num = 0, space = 0, other = 0;

void StatCharCount(char str[])
{	
	int i = 0, sz = 0;
	sz = strlen(str);
	for (i = 0; i < sz; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			letter++;
		else if (str[i] >= '0' && str[i] <= '9')
			num++;
		else if (str[i] == ' ')
			space++;
		else
			other++;
	}
}
int main()
{
	char text[80] = { 0 };
	printf("请输入字符串：");
	gets(text);
	StatCharCount(text);
	printf("统计结果：\n");
	printf("该字符串中字母的个数为%d\n", letter);
	printf("该字符串中数字的个数为%d\n", num);
	printf("该字符串中空格的个数为%d\n", space);
	printf("该字符串中其它字符的个数为%d\n", other);
	return 0;
}