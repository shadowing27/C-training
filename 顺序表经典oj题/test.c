#define _CRT_SECURE_NO_WARNINGS 1

//����һ������ nums ��һ��ֵ val������Ҫ ԭ�� �Ƴ�������ֵ���� val ��Ԫ�أ��������Ƴ���������³��ȡ�
//��Ҫʹ�ö��������ռ䣬������ʹ�� O(1) ����ռ䲢 ԭ�� �޸��������顣
//Ԫ�ص�˳����Ըı䡣�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�

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

//����һ�����ϸ�������е����� nums������ԭ��ɾ���ظ����ֵ�Ԫ�أ�ʹÿ��Ԫ��ֻ����һ�Σ�
//����ɾ����������³��ȡ�Ԫ�ص����˳��Ӧ�ñ���һ�� ��Ȼ�󷵻� nums ��ΨһԪ�صĸ�����
//���� nums ��ΨһԪ�ص�����Ϊ k ������Ҫ����������ȷ����������Ա�ͨ����
//�������� nums ��ʹ nums ��ǰ k ��Ԫ�ذ���ΨһԪ�أ���������������� nums �г��ֵ�˳�����С�
//nums ������Ԫ���� nums �Ĵ�С����Ҫ��
//���� k ��

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

//���������� �ǵݼ�˳�� ���е��������� nums1 �� nums2�������������� m �� n ���ֱ��ʾ nums1 �� nums2 �е�Ԫ����Ŀ��
//���� �ϲ� nums2 �� nums1 �У�ʹ�ϲ��������ͬ���� �ǵݼ�˳�� ���С�
//ע�⣺���գ��ϲ������鲻Ӧ�ɺ������أ����Ǵ洢������ nums1 �С�Ϊ��Ӧ�����������
//nums1 �ĳ�ʼ����Ϊ m + n������ǰ m ��Ԫ�ر�ʾӦ�ϲ���Ԫ�أ��� n ��Ԫ��Ϊ 0 ��Ӧ���ԡ�nums2 �ĳ���Ϊ n ��

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