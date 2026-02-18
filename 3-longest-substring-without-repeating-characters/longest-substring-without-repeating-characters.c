#include <string.h>

int lengthOfLongestSubstring(char* s) {
    int n = strlen(s);
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        int used[256] = {0};
        int count = 0;

        for (int j = i; j < n; j++) {
            if (used[s[j]] == 1)
                break;

            used[s[j]] = 1;
            count++;
        }

        if (count > maxLen)
            maxLen = count;
    }

    return maxLen;
}
