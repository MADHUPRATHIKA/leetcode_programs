/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** fizzBuzz(int n, int* returnSize) {
    
    *returnSize = n;
    
    char** result = (char**)malloc(n * sizeof(char*));
    
    for (int i = 1; i <= n; i++) {
        
        result[i - 1] = (char*)malloc(12 * sizeof(char));
        
        if (i % 3 == 0 && i % 5 == 0) {
            strcpy(result[i - 1], "FizzBuzz");
        }
        else if (i % 3 == 0) {
            strcpy(result[i - 1], "Fizz");
        }
        else if (i % 5 == 0) {
            strcpy(result[i - 1], "Buzz");
        }
        else {
            sprintf(result[i - 1], "%d", i);
        }
    }
    
    return result;
}