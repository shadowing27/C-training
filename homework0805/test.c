#define _CRT_SECURE_NO_WARNINGS 1

//��һ�����������У�ֻ��һ�����ֳ���һ�Σ��������鶼�ǳɶԳ��ֵģ����ҳ��Ǹ�ֻ����һ�ε����֡�
//���磺
//�������У�1 2 3 4 5 1 2 3 4��ֻ��5����һ�Σ��������ֶ�����2�Σ��ҳ�5

//#include <stdio.h>
//int main()
//{
//	int arr[9] = { 1,2,3,4,5,1,2,3,4 };
//	int i = 0, j = 0;
//	for (i = 0; i < 9; i++)
//	{
//		for (j = i + 1; j < 9; j++)
//		{
//			if ((arr[i] ^ arr[j]) == 0)
//				break;
//		}
//		if ((arr[i] ^ arr[j]) == 0)
//			continue;
//		else
//			break;
//	}
//	printf("%d", arr[i]);
//	return 0;
//}

//ͳ�ƶ�������1�ĸ���

//#include <stdio.h>
//int two(int n)
//{
//	static int x = 0;
//	if (n >= 0)
//	{
//		if (n % 2 == 1)
//			x++;
//		n = n >> 1;
//		if (n > 0)
//			two(n);
//		return x;
//	}
//	else
//	{
//		n = ~n;
//		if (n % 2 == 1)
//			x++;
//		n = n >> 1;
//		if (n > 0)
//			two(n);
//		return 32 - x;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", two(n));
//	return 0;
//}

//����������ʱ������������������������

#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d,b=%d", a, b);
	return 0;
}