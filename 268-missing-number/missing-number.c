int missingNumber(int* nums, int numsSize) {
    int sum =0;
    for (int i = 0; i < numsSize; i++)
    {
        sum = sum + nums[i];
    }

    int n = numsSize;

    int total = n * (n + 1) / 2;

    return total - sum;

}