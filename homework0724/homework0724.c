#define _CRT_SECURE_NO_WARNINGS 1

//BC51 �������ж�
//
//#include <stdio.h>
//int main()
//{
//    int a, b, c;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    {
//        if ((a + b > c) && (a + c > b) && (b + c > a))
//        {
//            if ((a == b) && (b == c))
//                printf("Equilateral triangle!\n");
//            else if ((a == b) || (a == c) || (b == c))
//                printf("Isosceles triangle!\n");
//            else
//                printf("Ordinary triangle!\n");
//        }
//        else
//            printf("Not a triangle!\n");
//    }
//    return 0;
//}

//����Ļ�����9 * 9�˷��ھ���

//#include <stdio.h>
//int main()
//{
//	int a, b;
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			printf("%d*%d=%d ", b, a, a * b);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��10 �����������ֵ

//#include <stdio.h>
//int main()
//{
//	int a, b, i;
//	a = 0;
//	b = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a);
//		if (a > b)
//			b = a;
//	}
//	printf("���ֵΪ%d", b);
//	return 0;
//}

//����1/1-1/2+1/3-1/4+1/5����+1/99-1/100��ֵ����ӡ�����

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	float sum = 0.0f;
//	for (i = 1; i <= 100; i++)
//	{
//		switch (i % 2)
//		{
//		case 0:
//			sum = sum - 1.0 / i;
//			break;
//		case 1:
//			sum = sum + 1.0 / i;
//			break;
//		}
//	}
//	printf("1/1-1/2+1/3-1/4+1/5����+1/99-1/100=%f", sum);
//	return 0;
//}

//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9

//#include <stdio.h>
//int main()
//{
//	int i,n;
//	n = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			n++;
//		else if ((i / 10) % 10 == 9)
//			n++;
//	}
//	printf("1��100�����������г���%d������9\n", n);
//	return 0;
//}

//дһ�����룺��ӡ100~200֮�������

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if(j>sqrt(i))
//			printf("%d ", i);
//	}
//	return 0;
//}

#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0, j = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= i-1 ; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j > sqrt(i))
			printf("%d ", i);
	}
	return 0;
}