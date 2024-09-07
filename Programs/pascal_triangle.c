#include <stdio.h>

void printMatrix(int mat[][20], int rows, int cols)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%5d", mat[i][j]);
        }
        puts("");
    }
}

int main()
{
    int i, j, rows, cols;
    int a[20][20];
    rows = 20;
    //cols = 4;
for(i = 0 ; i < rows ; i++)
{
    a[i][0] = a[i][i] = 1;
    for(j = 1 ; j < i ; j++)
    {
        a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
    }
    //print current rows
    for(j = 0 ; j <= i ; j++)
    {
        printf("%6d", a[i][j]);
    }
    puts("");
}

return 0;
}