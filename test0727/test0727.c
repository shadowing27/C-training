#define _CRT_SECURE_NO_WARNINGS 1

//输出杨辉三角前十行

#include <stdio.h>
int main()
{
    int arr[10][10] = { 0 };
    int i = 0, j = 0;
    arr[0][0] = 1;
    arr[1][0] = 1;
    arr[1][1] = 1;
    for (i = 2; i < 10; i++)
    {
        arr[i][0] = 1;
        for (j = 1; j <= i; j++)
        {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j <= i; j++)
            printf("%-4d", arr[i][j]);
        printf("\n");
    }
    return 0;
}
