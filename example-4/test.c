#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//输⼊
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", p + i);
//		//也可以写成 scanf("%d", arr+i);
//	}
//	//输出
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//输⼊
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", p + i);
//		//也可以写成 scanf("%d", arr+i);
//	}
//	//输出
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//void test(int arr[])
//{
//	int sz2 = sizeof(arr) / sizeof(arr[0]);
//	printf("sz2 = %d\n", sz2);
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz1 = sizeof(arr) / sizeof(arr[0]);
//	printf("sz1 = %d\n", sz1);
//	test(arr);
//	return 0;
//}

////void test(int arr[])//参数写成数组形式，本质上还是指针
//void test(int* arr)//参数写成指针形式，与上面的写法等价
//{
//	printf("%d\n", sizeof(arr));//计算⼀个指针变量的⼤⼩
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	test(arr);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//
//	int b = 20;
//	*ppa = &b;//等价于 pa = &b;
//
//	**ppa = 30;
//	//等价于*pa = 30;
//	//等价于a = 30;
//
//	return 0;
//}

#include <stdio.h>
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	//数组名是数组⾸元素的地址，类型是int*的，就可以存放在parr数组中
	int* parr[3] = { arr1, arr2, arr3 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", parr[i][j]);
		}
		printf("\n");
	}
	return 0;
}