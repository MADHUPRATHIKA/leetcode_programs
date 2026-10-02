#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParityII(int* nums, int numsSize, int* returnSize)
{
    int *result = malloc(numsSize * sizeof(int));

    int even = 0;
    int odd = 1;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] % 2 == 0)
        {
            result[even] = nums[i];
            even += 2;
        }
        else
        {
            result[odd] = nums[i];
            odd += 2;
        }
    }

    *returnSize = numsSize;

    return result;
}