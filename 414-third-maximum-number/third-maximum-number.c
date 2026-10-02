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

int thirdMax(int* nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(int), compare);

    int count = 1;

    for (int i = numsSize - 2; i >= 0; i--)
    {
        if (nums[i] != nums[i + 1])
        {
            count++;

            if (count == 3)
            {
                return nums[i];
            }
        }
    }

    return nums[numsSize - 1];
}