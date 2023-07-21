#define _CRT_SECURE_NO_WARNINGS 1

//BC18 计算带余除法
//
//#include <stdio.h>
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    printf("%d %d", a / b, a % b);
//    return 0;
//}
//
//BC41 - 你是天才吗？
//
//#include <stdio.h>
//int main()
//{
//    int a, b;
//    a = 140;
//    scanf("%d", &b);
//    if (a <= b)
//        printf("Genius");
//    return 0;
//}
//
//BC49 - 判断2个数的大小
//
//#include <stdio.h>
//int main()
//{
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF)
//    {
//        if (a == b)
//            printf("%d=%d\n", a, b);
//        else if (a > b)
//            printf("%d>%d\n", a, b);
//        else if (a < b)
//            printf("%d<%d\n", a, b);
//    }
//    return 0;
//}
//
//BC83 - 被5整除问题
//
//#include <stdio.h>
//int main()
//{
//    int a, b;
//    scanf("%d", &a);
//    b = 5;
//    if (a % b == 0)
//        printf("YES");
//    else
//        printf("NO");
//    return 0;
//}
//
//BC56 - 线段图案
//
//#include <stdio.h>
//int main() 
//{
//    int a, b;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (b = 0; b < a; b++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}