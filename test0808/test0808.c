#define _CRT_SECURE_NO_WARNINGS 1

//����һ�� �ǿ� �������� nums ������ĳ��Ԫ��ֻ����һ�����⣬����ÿ��Ԫ�ؾ��������Ρ���ʵ�ֺ�����
//int singleNumber(int nums[], int numsSize)���ҳ��Ǹ�ֻ����һ�ε�Ԫ�ء�
//���磺nums = [4, 1, 2, 1, 2]
//���أ�4

#include <stdio.h>
int singleNumber(int nums[], int numsSize)
{
	int single = 0, i = 0;
	for (i = 0; i < numsSize; i++)
	{
		single ^= nums[i];
	}
	return single;
}
int main()
{
	int nums[5] = {4, 1, 2, 1, 2};
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	printf("ֻ����һ�ε�Ԫ��Ϊ%d", singleNumber(nums, numsSize));
	return 0;
}