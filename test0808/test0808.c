#define _CRT_SECURE_NO_WARNINGS 1

//给你一个 非空 整数数组 nums ，除了某个元素只出现一次以外，其余每个元素均出现两次。请实现函数：
//int singleNumber(int nums[], int numsSize)，找出那个只出现一次的元素。
//比如：nums = [4, 1, 2, 1, 2]
//返回：4

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
	printf("只出现一次的元素为%d", singleNumber(nums, numsSize));
	return 0;
}