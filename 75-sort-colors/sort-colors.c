void sortColors(int* nums, int numsSize) {
    int i,j;
    for(i=0;i<numsSize;i++){
     for(j=i+1;j<numsSize;j++){
       if(nums[i]>nums[j]) {
        int temp=nums[j];
        nums[j]=nums[i];
        nums[i]=temp;
     }   
    }
} 
}