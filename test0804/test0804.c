#define _CRT_SECURE_NO_WARNINGS 1

//���ӷ�ֳ���⣺�ٶ�һ�Դ�����ÿ������һ��С���ӣ���ÿ��������С���Ӿ���һ���¿��Գ���һ�Դ�����, �߱���ֳ������
//�����������������ÿ�ξ�����һ��һ�ۣ���һ����ж��ٶ����ӣ�

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
	printf("һ�����%d������\n", sum);
	return 0;
}