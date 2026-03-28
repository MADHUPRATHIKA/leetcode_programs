int numOfSubarrays(int* arr, int arrSize, int k, int threshold) {
    
    int count = 0;
    int windowSum = 0;
    int target = threshold * k;
    
    
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }
    
    if (windowSum >= target) {
        count++;
    }
    
   
    for (int i = k; i < arrSize; i++) {
        
        windowSum += arr[i];        
        windowSum -= arr[i - k];    
        if (windowSum >= target) {
            count++;
        }
    }
    
    return count;
}