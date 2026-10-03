int firstUniqChar(char* s) {
    int count[26] = {0};
    int i;
    for (i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }
    for (i = 0; s[i] != '\0'; i++) {
        if (count[s[i] - 'a'] == 1) {
            return i;
        }
    }

    return -1;
}