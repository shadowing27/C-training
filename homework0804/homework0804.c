#define _CRT_SECURE_NO_WARNINGS 1

//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//���磺
//���룺5  �����5
//���룺10�� �����55
//���룺2�� �����1

//  �ǵݹ�
//#include <stdio.h>
//int main()
//{
//	int n = 0, i = 0;
//	int f[1000] = { 0 };
//	f[0] = 1;
//	f[1] = 1;
//	printf("�����룺");
//	scanf("%d", &n);
//	if (n <= 2 && n > 0)
//	{
//		printf("��%d��쳲���������%d", n, f[n - 1]);
//	}
//	else if(n>2)
//	{
//		for (i = 2; i < n; i++)
//		{
//			f[i] = f[i - 1] + f[i - 2];
//		}
//		printf("��%d��쳲���������%d", n, f[n - 1]);
//	}
//	return 0;
//}
// 
//  �ݹ�
//#include <stdio.h>
//int f(int n)
//{
//	int arr[1000] = { 1,1,0 };
//	if (n <= 2 && n > 0)
//		return arr[n - 1];
//	else if (n > 2)
//	{
//		arr[n - 1] = f(n - 1) + f(n - 2);
//		return arr[n - 1];
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("�����룺");
//	scanf("%d", &n);
//	printf("��%d��쳲���������%d", n, f(n));
//	return 0;
//}

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�

//#include <stdio.h>
//int m(int n, int k)
//{
//	int nk = 1;
//	if (k == 0)
//		return nk;
//	else if (k > 0)
//		nk = n * m(n, k - 1);
//}
//int main()
//{
//	int n = 0, k = 0;
//	printf("�����룺");
//	scanf("%d %d", &n, &k);
//	printf("%d��%d�η�Ϊ%d", n, k, m(n, k));
//	return 0;
//}

//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19

//#include <stdio.h>
//int DigitSum(n)
//{
//	static int sum = 0;
//	sum += n % 10;
//	if (n / 10 != 0)
//		DigitSum(n / 10);
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", DigitSum(n));
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩

//�ǵݹ�
//#include <stdio.h>
//int multiple(int n)
//{
//	int x = 1, i = 0;
//	for (i = 1; i <= n; i++)
//		x *= i;
//	return x;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", multiple(n));
//	return 0;
//}
//�ǵݹ�
//#include <stdio.h>
//int multiple(int n)
//{
//	static int x = 1;
//	if (n - 1 > 0)
//	{
//		x = n * multiple(n - 1);
//		return x;
//	}
//	return x;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", multiple(n));
//	return 0;
//}

//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ

#include <stdio.h>
void print(int n)
{
	int i = n % 10;
	n = n / 10;
	if (n > 0)
		print(n);
	printf("%d ", i);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print(n);
	return 0;
}