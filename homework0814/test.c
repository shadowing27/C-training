#define _CRT_SECURE_NO_WARNINGS 1

//������������ʹ�ú���ָ������ʵ��ת�Ʊ�Ĵ��룬�Լ�ʵ���󣬲��ύ���뵽�𰸴��ڡ�

//#include <stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("***************************\n");
//	printf("****** 1. add 2. sub ******\n");
//	printf("****** 3. mul 4. div ******\n");
//	printf("****** 0. exit       ******\n");
//	printf("***************************\n");
//}
//int main()
//{
//	int input = 0, x = 0, y = 0, ret = 0;
//	int (*pfArr[])(int, int) = {0,add,sub,mul,div};
//	do
//	{
//		menu();
//		printf("�����룺");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("������Ҫ�������������");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�������\n");
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//	} while (input);
//	return 0;
//}

//��ϰʹ�ÿ⺯����qsort����������͵�����

//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void print_arr(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//void test1()
//{
//	int arr[] = { 2,3,1,5,6,4,8,7,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//��дһ�������ҳ�������ֻ����һ�ε����֡�
//
//���磺
//�������Ԫ���ǣ�1��2��3��4��5��1��2��3��4��6
//ֻ��5��6ֻ����1�Σ�Ҫ�ҳ�5��6.

//#include <stdio.h>
//#include <stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void search(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == arr[i + 1])
//		{
//			i++;
//			continue;
//		}
//		else
//			printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	search(arr, sz);
//	return 0;
//}

//BC54 ����·�����
//
//����
//KiKi����ĳ��ĳ���ж����죬��������ʵ�֡�������ݺ��·ݣ�������һ��������ж����졣
//����������
//�������룬һ���������������ֱ��ʾ��ݺ��·ݣ��ÿո�ָ���
//���������
//���ÿ�����룬���Ϊһ�У�һ����������ʾ��һ��������ж����졣

#include <stdio.h>

int main()
{
    int year = 0, month = 0;
    while ((scanf("%d %d", &year, &month) != EOF))
    {
        switch (month)
        {
        case 2:
            if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
            {
                printf("29\n");
                break;
            }
            else
            {
                printf("28\n");
                break;
            }
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30\n");
            break;
        }
    }
    return 0;
}