/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize) {
    
    int *result = (int *)malloc(arr1Size * sizeof(int));
    
    int freq[1001] = {0};
    
    int k = 0;
    for (int i = 0; i < arr1Size; i++) {
        freq[arr1[i]]++;
    }
    for (int i = 0; i < arr2Size; i++) {
        
        while (freq[arr2[i]] > 0) {
            result[k] = arr2[i];
            k++;
            freq[arr2[i]]--;
        }
    }
    for (int i = 0; i <= 1000; i++) {
        
        while (freq[i] > 0) {
            result[k] = i;
            k++;
            freq[i]--;
        }
    }

    *returnSize = arr1Size;

    return result;
}