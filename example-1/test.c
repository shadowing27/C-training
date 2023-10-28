#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 5;
//	int* p = &a;
//	*p = 10;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(short*));
//	printf("%zd\n", sizeof(int*));
//	printf("%zd\n", sizeof(double*));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 0x11223344;
//	int* pi = &n;
//	*pi = 0;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 0x11223344;
//	char* pc = (char*)&n;
//	*pc = 0;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//
//	printf("&n   = %p\n", &n);
//	printf("pc   = %p\n", pc);
//	printf("pc+1 = %p\n", pc + 1);
//	printf("pi   = %p\n", pi);
//	printf("pi+1 = %p\n", pi + 1);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//#include <stdio.h>
//int my_strlen(char* s)
//{
//	char* p = s;      //记录首元素地址
//	while (*p != '\0')//寻找字符串最后一个元素的地址
//		p++;
//	return p - s;     //指针-指针计算得出字符串长度
//}
//int main()
//{
//	printf("%d\n", my_strlen("abc"));
//	//此处传参传的其实是字符串首元素的地址，因此用char*来接收                      
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (p < arr + sz) //指针的⼤⼩⽐较
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	m = 10;//m可以被修改
//	const int n = 0;
//	n = 10;//n不能被修改，编译器报错
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	const int n = 0;
//	printf("n = %d\n", n);
//	int* p = &n;
//	*p = 10;
//	printf("n = %d\n", n);
//	return 0;
//}

#include <stdio.h>
//void test1()
//{
//	int n = 10;
//	int m = 20;
//	int* p = &n;
//	*p = 20;//通过指针p可以成功修改指向对象n
//	p = &m; //指针p本身所存储的地址也可以被修改
//}
//int main()
//{
//	//测试⽆const修饰的情况
//	test1();
//	return 0;
//}
//void test2()
//{
//	int n = 10;
//	int m = 20;
//	const int* p = &n;
//	*p = 20;//指针p所指向的对象n不可被修改
//	p = &m; //指针p自身可以被修改
//}
//int main()
//{
//	//测试const放在*的左边情况
//	test2();
//	return 0;
//}
//void test3()
//{
//	int n = 10;
//	int m = 20;
//	int* const p = &n;
//	*p = 20; //指针p所指向的对象n可以被修改
//	p = &m; //指针p自身不可被修改
//}
//int main()
//{
//	//测试const放在*的右边情况
//	test3();
//	return 0;
//}
//void test4()
//{
//	int n = 10;
//	int m = 20;
//	int const* const p = &n;
//	*p = 20; //指针p指向的对象n不可被修改
//	p = &m; //指针p自身也不可被修改
//}
//int main()
//{
//	//测试*的左右两边都有const
//	test4();
//	return 0;
//}