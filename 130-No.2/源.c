#define _CRT_SECURE_NO_WARNINGS 1

//BC2 С�ɻ���No.1

//BC16 ʮ������תʮ����
//
//#include <stdio.h>
//int main()
//{
//    int a = 0xABCDEF;//16��������0x��0X��ͷ
//    printf("%15d", a);//dΪʮ�������
//    return 0;
//}

//ԭBC9 printf�ķ���ֵ
//����������У�
//��һ��Ϊ��Hello world!��
//�ڶ���Ϊprintf(��Hello world!��)���ú�ķ���ֵ��

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

//BC11 �ɼ��������
//
//#include <stdio.h>
//int main()
//{
//    int a = 0, b = 0, c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    printf("score1=%d,score2=%d,score3=%d", a, b, c);
//    return 0;
//}

//BC56 �ж���ĸ
//�Ӽ�����������һ���ַ�������ж��Ƿ�����ĸ��������Сд����
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

//ԭBC12 �ַ�������
//����һ���ַ�����������һ�������ν�������

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