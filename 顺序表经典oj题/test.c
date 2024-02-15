#define _CRT_SECURE_NO_WARNINGS 1

//给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。
//不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。
//元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。

int removeElement(int* nums, int numsSize, int val)
{
    int src = 0;
    int dst = 0;
    while (src < numsSize)
    {
        if (nums[src] == val)
        {
            src++;
        }
        else
        {
            nums[dst] = nums[src];
            dst++;
            src++;
        }
    }
    return dst;
}

//给你一个非严格递增排列的数组 nums，请你原地删除重复出现的元素，使每个元素只出现一次，
//返回删除后数组的新长度。元素的相对顺序应该保持一致 。然后返回 nums 中唯一元素的个数。
//考虑 nums 的唯一元素的数量为 k ，你需要做以下事情确保你的题解可以被通过：
//更改数组 nums ，使 nums 的前 k 个元素包含唯一元素，并按照它们最初在 nums 中出现的顺序排列。
//nums 的其余元素与 nums 的大小不重要。
//返回 k 。

int removeDuplicates(int* nums, int numsSize)
{
    int src = 1, k = 0;
    while (src < numsSize)
    {
        if (nums[src] == nums[k])
        {
            src++;
        }
        else
        {
            k++;
            nums[k] = nums[src];
        }
    }
    return k+1;
}

//给你两个按 非递减顺序 排列的整数数组 nums1 和 nums2，另有两个整数 m 和 n ，分别表示 nums1 和 nums2 中的元素数目。
//请你 合并 nums2 到 nums1 中，使合并后的数组同样按 非递减顺序 排列。
//注意：最终，合并后数组不应由函数返回，而是存储在数组 nums1 中。为了应对这种情况，
//nums1 的初始长度为 m + n，其中前 m 个元素表示应合并的元素，后 n 个元素为 0 ，应忽略。nums2 的长度为 n 。

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
    int a = m - 1, b = n - 1, c = m + n - 1;
    while ((a >= 0) && (b >= 0))
    {
        if (nums1[a] >= nums2[b])
        {
            nums1[c--] = nums1[a--];

        }
        else
        {
            nums1[c--] = nums2[b--];
        }
    }
    while (b >= 0)
    {
        nums1[c--] = nums2[b--];
    }
}

int main()
{
    //int nums[3] = { 1,1,2 };
    //removeDuplicates(nums,3);
    int nums1[] = { 1, 2, 3, 0, 0, 0 };
    int m = 3, n = 3;
    int nums2[] = { 2, 5, 6 };
    merge(nums1, 6, 3, nums2, 3, 3);
    return 0;
}