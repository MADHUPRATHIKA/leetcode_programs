bool canConstruct(char* ransomNote, char* magazine) {
    int count[26] = {0};
    for (int i = 0; magazine[i] != '\0'; i++) {
        count[magazine[i] - 'a']++;
    }
    for (int i = 0; ransomNote[i] != '\0'; i++) {
        int index = ransomNote[i] - 'a';

        if (count[index] == 0) {
            return false;
        }

        count[index]--;
    }

    return true;
}