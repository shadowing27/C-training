#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//void Swap1(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap1(a, b);
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}

//#include <stdio.h>
//void Swap2(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap2(&a, &b);
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}

//#include <stdio.h>
//int myStrlen(char* str)
//{
//	int len = 0;
//	while (*str != '\0')
//	{
//		len++;
//		str++;
//	}
//	return len;
//}
//int main()
//{
//	char str[] = { "abcdef" };
//	int len = myStrlen(str);
//	printf("%d \n", len);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("&arr[0] = %p\n", &arr[0]);
//	printf("arr     = %p\n", arr);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

#include <stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("&arr[0]   = %p\n", &arr[0]);
	printf("&arr[0]+1 = %p\n", &arr[0] + 1);
	printf("arr       = %p\n", arr);
	printf("arr+1     = %p\n", arr + 1);
	printf("&arr      = %p\n", &arr);
	printf("&arr+1    = %p\n", &arr + 1);
	return 0;
}