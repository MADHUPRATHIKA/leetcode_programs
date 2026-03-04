int pivotIndex(int* nums, int numsSize) {
    int t=0;
    for(int i=0;i<numsSize;i++){
        t=t+nums[i];
    }
    int lf=0;
    for(int i=0;i<numsSize;i++){
        int rf=t-lf-nums[i];
        if(lf==rf){
            return i;
        }
        lf=lf+nums[i];
    }
    return -1;
}