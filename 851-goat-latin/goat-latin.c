char* toGoatLatin(char* sentence) {
    int len = strlen(sentence);
    char* result = malloc(len * 3 + 1000);

    int i = 0, k = 0, word = 1;

    while (sentence[i] != '\0') {

        int start = i;
        while (sentence[i] != '\0' && sentence[i] != ' ') {
            i++;
        }

        int end = i;

        char ch = sentence[start];

        // Vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U') {

            for (int j = start; j < end; j++)
                result[k++] = sentence[j];

        } else {
            for (int j = start + 1; j < end; j++)
                result[k++] = sentence[j];

            result[k++] = sentence[start];
        }

        // Add "ma"
        result[k++] = 'm';
        result[k++] = 'a';
        for (int j = 0; j < word; j++)
            result[k++] = 'a';

        word++;
        if (sentence[i] != '\0')
            result[k++] = ' ';
        if (sentence[i] == ' ')
            i++;
    }

    result[k] = '\0';

    return result;
}