#include <stdio.h>
#include <stdlib.h>

int** generate(int numRows, int* returnSize, int** returnColumnSizes)
{
    int **result;
    int i, j;

    result = (int **)malloc(numRows * sizeof(int *));

    *returnColumnSizes = (int *)malloc(numRows * sizeof(int));

    *returnSize = numRows;

    i = 0;

    while (i < numRows)
    {
        result[i] = (int *)malloc((i + 1) * sizeof(int));

        (*returnColumnSizes)[i] = i + 1;

        result[i][0] = 1;

        j = 1;

        while (j < i)
        {
            result[i][j] = result[i - 1][j - 1]
                         + result[i - 1][j];

            j++;
        }
        result[i][i] = 1;

        i++;
    }

    return result;
}