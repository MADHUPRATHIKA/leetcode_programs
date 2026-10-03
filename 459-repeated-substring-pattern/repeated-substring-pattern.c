bool repeatedSubstringPattern(char* s) {
    int n = strlen(s);
    for (int len = 1; len <= n / 2; len++) {
        if (n % len != 0)
            continue;
        int valid = 1;
        for (int i = len; i < n; i++) {
            if (s[i] != s[i % len]) {
                valid = 0;
                break;
            }
        }
        if (valid)
            return true;
    }
    return false;
}