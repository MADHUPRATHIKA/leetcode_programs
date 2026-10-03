char* addBinary(char* a, char* b) {
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int carry = 0;

    int size = (i > j ? i : j) + 3;

    char *result = malloc(size);

    int k = size - 1;
    result[k] = '\0';
    k--;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0) {
            sum += a[i] - '0';
            i--;
        }

        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }

        result[k] = (sum % 2) + '0';
        k--;

        carry = sum / 2;
    }

    return result + k + 1;
}