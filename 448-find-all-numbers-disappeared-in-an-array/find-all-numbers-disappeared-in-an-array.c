/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    
    for(int i = 0; i < numsSize; i++) {
        int index = abs(nums[i]) - 1;
        if(nums[index] > 0) {
            nums[index] = -nums[index];
        }
    }
    int count = 0;
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] > 0) {
            count++;
        }
    }
    int* result = (int*)malloc(count * sizeof(int));
    *returnSize = count;
    
    int j = 0;
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] > 0) {
            result[j++] = i + 1;
        }
    }
    
    return result;
}