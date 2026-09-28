bool isHappy(int n) {
    int sum;

    while (n != 1 && n != 4)
    {
        sum = 0;

        while (n > 0)
        {
            int digit = n % 10;
            sum = sum + digit * digit;
            n = n / 10;
        }

        n = sum;
    }

    return n == 1;

}