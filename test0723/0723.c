#define _CRT_SECURE_NO_WARNINGS 1

//Ϊ�˿���ѧ����˽���ִ��㽫ѧ���ɼ����Ƴɼ���ABCDE��ʽ���֣����:
//a : ѧ���ɼ�����[90��100]�䣬 �����A
//b : ѧ���ɼ�����[80��90)�䣬�����B
//c : ѧ���ɼ�����[70��80)�䣬�����C
//d : ѧ���ɼ�����[60��70)�䣬�����D
//b : ѧ���ɼ�����[0��60) �䣬�����E
//e : ����������Ƿ��ɼ�
//������һ���ɼ���Ȼ������óɼ���Ӧ�ļ�������ɼ�����[0, 100]�䣬����Ƿ��ɼ�


#include<stdio.h>
int main()
{
	int score = 0;
	scanf("%d", &score);
	if (score >= 0 && score <= 100)
	{
		if (score >= 90 && score <= 100)
			printf("A");
		else if(score >= 80 && score < 90)
			printf("B");
		else if (score >= 70 && score < 80)
			printf("C");
		else if (score >= 60 && score < 70)
			printf("D");
		else
			printf("E");
	}
	else
		printf("�Ƿ��ɼ�");
	return 0;
}
