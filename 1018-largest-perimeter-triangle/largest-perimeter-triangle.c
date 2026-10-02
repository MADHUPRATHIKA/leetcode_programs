#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int x = *(int *)a;
    int y = *(int *)b;

    if (x < y)
        return -1;
    else if (x > y)
        return 1;
    else
        return 0;
}

int largestPerimeter(int* nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(int), compare);

    for (int i = numsSize - 1; i >= 2; i--)
    {
        if (nums[i - 2] + nums[i - 1] > nums[i])
        {
            return nums[i - 2] + nums[i - 1] + nums[i];
        }
    }

    return 0;
}