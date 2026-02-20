int maxSubArray(int* nums, int numsSize) {
    int sum1=nums[0];
    int sum2=nums[0];
    for(int i=1;i<numsSize;i++){
        if(sum1<0)
            sum1=nums[i];
        else
            sum1+=nums[i];
        if(sum1>sum2)
            sum2=sum1;
    }
    return sum2;
}