#define _CRT_SECURE_NO_WARNINGS 1

//��дһ�����򣬴��û������ж�ȡ10���������洢��һ�������С�Ȼ�󣬼��㲢�����Щ������ƽ��ֵ��

//#include <stdio.h>
//int main()
//{
//	int arr[10];
//	int i = 0, sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//	printf("��Щ������ƽ��ֵ��%.2f\n", sum / 10.0f);
//	return 0;
//}

//��������Ϸ

//#include <stdlib.h>
//#include <stdio.h>
//#include <time.h>
//void menu()
//{
//	printf("**************************\n");
//	printf("******** 1. start ********\n");
//	printf("******** 0. exit  ********\n");
//	printf("**************************\n");
//}
//void game()
//{
//	int num = rand() % 100 + 1;
//	int guess = 0;
//	int count = 5;
//	while (count)
//	{
//		printf("\n�㻹��%d�λ���\n",count);
//		printf("�������:");
//		scanf("%d", &guess);
//		if (guess == num)
//		{
//			printf("��ϲ���¶��ˣ�\n\n");
//			break;
//		}
//		else if (guess < num)
//		{
//			printf("��С�ˣ�������\n");
//		}
//		else if (guess > num)
//		{
//			printf("�´��ˣ�������\n");
//		}
//		count--;
//	}
//	if (count == 0)
//		printf("\n���������꣬��ȷ����%d\n\n",num);
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do {
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("\n--------END--------\n");
//			break;
//		default:
//			printf("error!������ѡ��\n\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//BC107 - ����ת��

//#include <stdio.h>
//int main()
//{
//    int arr1[10][10] = { 0 };
//    int arr2[10][10] = { 0 };
//    int n = 0, m = 0, i = 0, j = 0, temp = 0;
//    scanf("%d %d", &n, &m);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            arr2[i][j] = arr1[j][i];
//            printf("%d ", arr2[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//������A�е����ݺ�����B�е����ݽ��н�����������һ����

//#include <stdio.h>
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int b[5] = { 9,8,7,6,5 };
//	int i = 0, temp = 0;
//	printf("����ǰ��\n");
//	printf("����A:");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n����B:");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//	printf("\n������\n");
//	printf("����A:");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n����B:");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	return 0;
//}

//���������������������������Լ��
//���磺
//���룺20 40
//�����20

//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0, min = 0, i = 0;
//	scanf("%d %d", &a, &b);
//	if (a < b)
//		min = a;
//	else
//		min = b;
//	for (i = min; i > 0; i--)
//	{
//		if ((a % i) == 0 && (b % i) == 0)
//			break;
//	}
//	printf("���Լ��Ϊ%d", i);
//	return 0;
//}

//��ӡ1000�굽2000��֮�������

#include <stdio.h>
int main()
{
	int i = 0;
	printf("1000�굽2000��֮�������:\n");
	for (i = 1000; i <= 2000; i += 4)
	{
		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
			printf("%d ", i);
	}
	return 0;
}