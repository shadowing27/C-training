#define _CRT_SECURE_NO_WARNINGS 1

//用筛选法求100之内的素数并输出。
//素数：约数为1和该数本身的数字称为素数，即质数
//筛选法：又称为筛法。先把N个自然数按次序排列起来。1不是质数，也不是合数，要划去。第二个数2是质数留下来，
//而把2后面所有能被2整除的数都划去。2后面第一个没划去的数是3，把3留下，再把3后面所有能被3整除的数都划去。
//3后面第一个没划去的数是5，把5留下，再把5后面所有能被5整除的数都划去。这样一直做下去，就会把不超过N的全部合数都筛掉，
//留下的就是不超过N的全部质数。因为希腊人是把数写在涂腊的板上，每要划去一个数，就在上面记以小点，寻求质数的工作完毕后，
//这许多小点就像一个筛子，所以就把埃拉托斯特尼的方法叫做“埃拉托斯特尼筛”，简称“筛法”。
//（另一种解释是当时的数写在纸草上，每要划去一个数，就把这个数挖去，寻求质数的工作完毕后，这许多小洞就像一个筛子。）

#include <stdio.h>
int main()
{
	int i = 0, j = 0, n = 0;
	int arr[100] = { 0 };//用于存储素数
	//1不是素数所以跳过1从2开始
	for (i = 2; i <= 100; i++)
	{
		//判断是否能整除已知素数
		for (j = 0; j < n; j++)
		{
			if (i % arr[j] == 0)
				break;
		}
		//不能整除时存入数组
		if (j >= n)
		{
			printf("%d ", i);
			arr[n] = i;
			n++;
		}
		else
			continue;
	}
	return 0;
}