#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int maximumProduct(int* nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(int), compare);

    int product1 = nums[numsSize - 1] *
                   nums[numsSize - 2] *
                   nums[numsSize - 3];

    int product2 = nums[0] *
                   nums[1] *
                   nums[numsSize - 1];

    if (product1 > product2)
        return product1;
    else
        return product2;
}