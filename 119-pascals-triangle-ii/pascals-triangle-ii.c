#include <stdlib.h>

int* getRow(int rowIndex, int* returnSize)
{
    int *row;
    int i, j;

    *returnSize = rowIndex + 1;

    row = (int *)malloc(*returnSize * sizeof(int));

    i = 0;

    while (i <= rowIndex)
    {
        row[i] = 1;
        i++;
    }

    i = 1;

    while (i < rowIndex)
    {
        j = i;

        while (j > 0)
        {
            row[j] = row[j] + row[j - 1];
            j--;
        }

        i++;
    }

    return row;
}