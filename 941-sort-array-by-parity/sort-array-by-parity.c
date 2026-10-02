#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize)
{
    int *result = malloc(numsSize * sizeof(int));

    int even = 0;
    int odd = numsSize - 1;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] % 2 == 0)
        {
            result[even] = nums[i];
            even++;
        }
        else
        {
            result[odd] = nums[i];
            odd--;
        }
    }

    *returnSize = numsSize;

    return result;
}