char* addStrings(char* num1, char* num2) {
    int i = strlen(num1) - 1;
    int j = strlen(num2) - 1;
    int carry = 0;

    int n1 = strlen(num1);
    int n2 = strlen(num2);

    int size = (n1 > n2 ? n1 : n2) + 2;

    char *result = malloc(size);

    int k = size - 1;
    result[k] = '\0';

    k--;

    while (i >= 0 || j >= 0 || carry) {

        int sum = carry;

        if (i >= 0) {
            sum += num1[i] - '0';
            i--;
        }

        if (j >= 0) {
            sum += num2[j] - '0';
            j--;
        }

        result[k] = (sum % 10) + '0';
        k--;

        carry = sum / 10;
    }

    return result + k + 1;
}