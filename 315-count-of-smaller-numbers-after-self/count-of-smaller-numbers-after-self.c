/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

typedef struct {
    int val;
    int idx;
} Pair;

void merge(Pair* arr, int l, int m, int r, int* count) {
    int i = l, j = m + 1, k = 0;
    Pair* temp = (Pair*)malloc((r - l + 1) * sizeof(Pair));

    while (i <= m && j <= r) {
        if (arr[i].val <= arr[j].val) {
            temp[k++] = arr[j++];
        } else {
            count[arr[i].idx] += (r - j + 1);
            temp[k++] = arr[i++];
        }
    }

    while (i <= m) temp[k++] = arr[i++];
    while (j <= r) temp[k++] = arr[j++];

    for (i = l, k = 0; i <= r; i++, k++)
        arr[i] = temp[k];

    free(temp);
}

void mergeSort(Pair* arr, int l, int r, int* count) {
    if (l >= r) return;
    int m = (l + r) / 2;
    mergeSort(arr, l, m, count);
    mergeSort(arr, m + 1, r, count);
    merge(arr, l, m, r, count);
}

int* countSmaller(int* nums, int numsSize, int* returnSize) {
    Pair* arr = (Pair*)malloc(numsSize * sizeof(Pair));
    int* count = (int*)calloc(numsSize, sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        arr[i].val = nums[i];
        arr[i].idx = i;
    }

    mergeSort(arr, 0, numsSize - 1, count);

    *returnSize = numsSize;
    free(arr);
    return count;
}