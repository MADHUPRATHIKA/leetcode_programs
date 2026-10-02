int countSubstrings(char* s) {
    int n = strlen(s);
    int count = 0;

    for (int i = 0; i < n; i++) {

        // Odd length palindrome
        int left = i;
        int right = i;

        while (left >= 0 && right < n && s[left] == s[right]) {
            count++;
            left--;
            right++;
        }
        left = i;
        right = i + 1;

        while (left >= 0 && right < n && s[left] == s[right]) {
            count++;
            left--;
            right++;
        }
    }

    return count;
}