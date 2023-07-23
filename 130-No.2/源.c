#define _CRT_SECURE_NO_WARNINGS 1

//BC2 小飞机见No.1

//BC16 十六进制转十进制
//
//#include <stdio.h>
//int main()
//{
//    int a = 0xABCDEF;//16进制需以0x或0X开头
//    printf("%15d", a);//d为十进制输出
//    return 0;
//}

//原BC9 printf的返回值
//输出包括两行：
//第一行为“Hello world!”
//第二行为printf(“Hello world!”)调用后的返回值。

//#include <stdio.h>
//int main()
//{
//    int ret = printf("Hello world!");
//    printf("\n%d", ret);
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    printf("\n%d", printf("Hello world!"));
//    return 0;
//}

//BC11 成绩输入输出
//
//#include <stdio.h>
//int main()
//{
//    int a = 0, b = 0, c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    printf("score1=%d,score2=%d,score3=%d", a, b, c);
//    return 0;
//}

//BC56 判断字母
//从键盘任意输入一个字符，编程判断是否是字母（包括大小写）。
//
//#include <stdio.h>
//int main()
//{
//    char a;
//    a = getchar();
//    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
//        printf("YES");
//    else
//        printf("NO");
//    return 0;
//}

//原BC12 字符金字塔
//输入一个字符，用它构造一个三角形金字塔。

#include <stdio.h>
int main()
{
    char a;
    a = getchar();
    int i, j;
    for (i = 5; i > 0; i--)
    {
        for (j = 0; j < i - 1; j++)
            printf(" ");
        for (j = 0; j < 6 - i; j++)
            printf("%c ", a);
        printf("\n");
    }
    return 0;
}