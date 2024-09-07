#include <stdio.h>
int main()
{
    int rows, cols, rowSum, colSum[20] = {0}, i, j, total;
    int mat[20][20] = {
        {1, 2, 3, 1},
        {4, 5, 6, 2},
        {7, 8, 9, 3}};
    rows = 3;
    cols = 4;
    for (i = 0; i < rows; i++)
    {
        rowSum = 0;
        for (j = 0; j < cols; j++)
        {
            rowSum += mat[i][j];
            colSum[j] += mat[i][j];
            printf("%4d", mat[i][j]);
        }
        printf("%6d", rowSum);
        puts("");
    }

    total = 0;
    puts("");
    for (j = 0; j < cols; j++)
    {
        printf("%4d", colSum[j]);
        total += colSum[j];
    }
    printf("%6d", total);
    puts("");

    return 0;
}