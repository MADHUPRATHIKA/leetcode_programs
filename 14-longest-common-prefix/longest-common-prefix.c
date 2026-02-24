#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    
    if (strsSize == 0) return "";

    // Assume first string as prefix
    char *prefix = strs[0];

    for (int i = 1; i < strsSize; i++) {
        int j = 0;

        // Compare characters
        while (prefix[j] && strs[i][j] && prefix[j] == strs[i][j]) {
            j++;
        }

        // Cut prefix at mismatch
        prefix[j] = '\0';

        if (prefix[0] == '\0')
            return "";
    }

    return prefix;
}