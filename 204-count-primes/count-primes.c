int countPrimes(int n)
{
    if (n <= 2)
        return 0;

    char *a = calloc(n, 1);
    int count = 1;

    for (int i = 3; i < n; i += 2)
        a[i] = 1;

    for (int i = 3; i * i < n; i += 2)
    {
        if (a[i])
        {
            for (int j = i * i; j < n; j += 2 * i)
                a[j] = 0;
        }
    }

    for (int i = 3; i < n; i += 2)
        if (a[i])
            count++;

    free(a);
    return count;
}