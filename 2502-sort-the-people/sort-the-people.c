/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** sortPeople(char** names, int namesSize, int* heights, int heightsSize, int* returnSize) {
   int i, j;
    
    for (i = 0; i < heightsSize; i++) {
        for (j = i + 1; j < heightsSize; j++) {
            if (heights[i] < heights[j]) {
    
                int tempHeight = heights[i];
                heights[i] = heights[j];
                heights[j] = tempHeight;
                char* tempName = names[i];
                names[i] = names[j];
                names[j] = tempName;
            }
        }
    } *returnSize = namesSize;
    return names;
}