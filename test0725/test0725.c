#define _CRT_SECURE_NO_WARNINGS 1

//��������е�"ˮ�ɻ���"��
//��ν"ˮ�ɻ���"��ָһ��3λ��, ���λ���������͵��ڸ�������
//����, 153��ˮ�ɻ���, ��Ϊ153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3

#include <stdio.h>
int main()
{
	int a, b, c, n = 0;
	for (a = 1; a < 10; a++)//��Ϊ����λ�����Ե�һλ���ִ�1��ʼ
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