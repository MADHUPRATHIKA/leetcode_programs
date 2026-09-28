int* selfDividingNumbers(int left, int right, int* returnSize)
{
    int *result = malloc((right - left + 1) * sizeof(int));
    int count = 0;

    for (int num = left; num <= right; num++)
    {
        int temp = num;
        int valid = 1;

        while (temp > 0)
        {
            int digit = temp % 10;

            if (digit == 0 || num % digit != 0)
            {
                valid = 0;
                break;
            }

            temp = temp / 10;
        }

        if (valid == 1)
        {
            result[count] = num;
            count++;
        }
    }

    *returnSize = count;

    return result;
}