#define _CRT_SECURE_NO_WARNINGS 1

//��дһ������void StatCharCount(char str[])���ú�������һ���ַ�����Ϊ��������ͳ�Ƹ��ַ�������ĸ�����֡��ո�������ַ��ĸ�����
//��main�������øú������ֱ��ӡ��ĸ�����֡��ո� �� �����ַ��ĳ��ִ�����
//������ʾ��һ������ֻ�ܷ���һ��ֵ���˴���ͳ�ƽ����4������˷��ؽ������ʹ��ȫ�ֱ�����������

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
	printf("�������ַ�����");
	gets(text);
	StatCharCount(text);
	printf("ͳ�ƽ����\n");
	printf("���ַ�������ĸ�ĸ���Ϊ%d\n", letter);
	printf("���ַ��������ֵĸ���Ϊ%d\n", num);
	printf("���ַ����пո�ĸ���Ϊ%d\n", space);
	printf("���ַ����������ַ��ĸ���Ϊ%d\n", other);
	return 0;
}