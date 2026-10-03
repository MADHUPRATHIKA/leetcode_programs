bool rotateString(char* s, char* goal) {
    int n = strlen(s);

    if (n != strlen(goal))
        return false;

    char temp[2 * n + 1];

    strcpy(temp, s);
    strcat(temp, s);

    return strstr(temp, goal) != NULL;
}