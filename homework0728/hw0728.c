#define _CRT_SECURE_NO_WARNINGS 1

//BC69 - ����������ͼ��

//#include <stdio.h>
//int main()
//{
//    int a, i, x;
//    while ((scanf("%d", &a)) != EOF)
//    for (i = 1; i <= a; i++)
//    {
//        if ((i == 1) || (i == a))
//        {
//            for (x = 0; x < a; x++)
//                printf("* ");
//            printf("\n");
//        }
//        else
//        {
//            printf("* ");
//            for (x = 1; x < a - 1; x++)
//                printf("  ");
//            printf("* \n");
//        }
//    }
//    return 0;
//}

//BC68 - X��ͼ��

//����̫�鷳��
//#include <stdio.h>
//void x(int a)
//{
//    int i = 0, j = 0, space = 0;
//    if (a % 2 == 1)
//    {
//        for (i = 1; i <= a; i++)
//        {
//            if (i < (a / 2 + 1))
//            {
//                space = i - 1;
//                if(space>0)
//                    for (j = 0; j < space; j++)
//                    {
//                        printf(" ");
//                    }
//                printf("*");
//                for (j = 0; j < a - 2 - space * 2; j++)
//                    printf(" ");
//                printf("*");
//                if (space > 0)
//                    for (j = 0; j < space; j++)
//                    {
//                        printf(" ");
//                    }
//            }
//            else if (i == (a / 2 + 1))
//            {
//                space = i - 1;
//                for (j = 0; j < space; j++)
//                {
//                    printf(" ");
//                }
//                printf("*");
//            }
//            else if (i > (a / 2 + 1))
//            {
//                space = a - i;
//                if (space > 0)
//                    for (j = 0; j < space; j++)
//                    {
//                        printf(" ");
//                    }
//                printf("*");
//                for (j = 0; j < a - 2 - space * 2; j++)
//                    printf(" ");
//                printf("*");
//                if (space > 0)
//                    for (j = 0; j < space; j++)
//                    {
//                        printf(" ");
//                    }
//            }
//            printf("\n");
//        }
//    }
//    else if (a % 2 == 0)
//    {
//        for (i = 1; i <= a; i++)
//        {
//            if (i <= (a / 2))
//            {
//                space = i - 1;
//                if (space > 0)
//                    for (j = 0; j < space; j++)
//                    {
//                        printf(" ");
//                    }
//                printf("*");
//                for (j = 0; j < a - 2 - space * 2; j++)
//                    printf(" ");
//                printf("*");
//                if (space > 0)
//                    for (j = 0; j < space; j++)
//                    {
//                        printf(" ");
//                    }
//            }
//            else if (i > (a / 2))
//            {
//                space = a - i;
//                if (space > 0)
//                    for (j = 0; j < space; j++)
//                    {
//                        printf(" ");
//                    }
//                printf("*");
//                for (j = 0; j < a - 2 - space * 2; j++)
//                    printf(" ");
//                printf("*");
//                if (space > 0)
//                    for (j = 0; j < space; j++)
//                    {
//                        printf(" ");
//                    }
//            }
//            printf("\n");
//        }
//    }
//}
//int main()
//{
//    int a = 0;
//    while ((scanf("%d", &a)) != EOF)
//        x(a);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0, i = 0, j = 0;
//	while ((scanf("%d", &a) != EOF))
//	{
//		for (i = 1; i <= a; i++)
//		{
//			for (j = 1; j <= a; j++)
//			{
//				if (i == j)
//					printf("*");
//				else if (i == a + 1 - j)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//��һά���顿BC92 - �������

//#include <stdio.h>
//int main()
//{
//    int arr[10] = { 0 };
//    int i = 0, temp = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < 5; i++)
//    {
//        temp = arr[i];
//        arr[i] = arr[9 - i];
//        arr[9 - i] = temp;
//    }
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//��һά���顿BC100 - �������кϲ�

//#include <stdio.h>
//int main()
//{
//    int arr[2000] = { 0 };
//    int n = 0, m = 0, i = 0, j = 0, temp = 0;
//    scanf("%d %d", &n, &m);
//    for (i = 0; i < n + m; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n + m; i++)
//    {
//        for (j = i+1; j < n + m; j++)
//        {
//            if (arr[i] > arr[j])
//            {
//                temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
//            }
//        }
//    }
//    for (i = 0; i < n + m; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//ʵ��һ������is_prime���ж�һ�����ǲ���������
//��������ʵ�ֵ�is_prime��������ӡ100��200֮���������

//#include <stdio.h>
//#include <math.h>
//void is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(i); j++)
//	{
//		if (i % j == 0)
//			break;
//	}
//	if(j>sqrt(i))
//		printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//		is_prime(i);
//	return 0;
//}

//�����ж�����

//#include <stdio.h>
//void run(int year)
//{
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		printf("%d������\n", year);
//	else
//		printf("%d��������\n", year);
//}
//int main()
//{
//	int year = 0;
//	printf("���������:");
//	scanf("%d", &year);
//	run(year);
//	return 0;
//}

//����һ���������飬��ɶ�����Ĳ���:
//1.ʵ�ֺ���init() ��ʼ������Ϊȫ0
//2.ʵ��print()  ��ӡ�����ÿ��Ԫ��
//3.ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��

//#include <stdio.h>
//void init(int arr[10])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		arr[i] = 0;
//}
//void print(int arr[10])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//void reverse(int arr[10])
//{
//	int i = 0, temp = 0;
//	for (i = 0; i < 5; i++)
//	{
//		temp = arr[i];
//		arr[i] = arr[9 - i];
//		arr[9 - i] = temp;
//	}
//}
//int main()
//{
//	int arr[10];
//	init(arr);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		scanf("%d", &arr[i]);
//	reverse(arr);
//	print(arr);
//	return 0;
//}

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���

#include <stdio.h>
void multiply(int n)
{
	int a, b;
	for (a = 1; a <= n; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf("%d*%d=%d ", b, a, a * b);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	multiply(n);
	return 0;
}