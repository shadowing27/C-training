#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'w';
//	return 0;
//}

//int main()
//{
//	const char* pstr = "hello world.";
//	printf("%s\n", pstr);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}

//int arr[10] = { 0 };
//int(*p)[10] = &arr;

//int(*p)[10] = &arr;
// |   |   |
// |   |   |
// |   |   pָ�������Ԫ�ظ���
// |   p������ָ�������
// pָ��������Ԫ������

//#include <stdio.h>
//void test(int a[3][5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6},{3,4,5,6,7} };
//	test(arr, 3, 5);
//	return 0;
//}

//#include <stdio.h>
//void test(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6},{3,4,5,6,7} };
//	test(arr, 3, 5);
//	return 0;
//}

//void test()
//{
//	printf("hehe\n");
//}
//void (*pf1)() = &test;
//void (*pf2)() = test;
//int Add(int x, int y)
//{
//	return x + y;
//}
//int(*pf3)(int, int) = Add;
//int(*pf3)(int x, int y) = &Add;//x��yд�ϻ���ʡ�Զ�����

//int (*pf3) (int x, int y)
// |     |    ------------
// |     |         |
// |     |         pf3ָ�����Ĳ������ͺ͸����Ľ���
// |     ����ָ�������
// pf3ָ�����ķ�������
// 
//int (*) (int x, int y) //pf3����ָ�����������