#include<stdio.h>

void printMatrix(int mat[][20], int rows, int cols)
        {
            int i, j;
            for(i = 0 ; i < rows ; i++)
            {
                for(j = 0; j < cols ; j++)
                {
                    printf("%4d", mat[i][j]);
                }
                puts("");
            }
        }

int main()
{
    int i, j, mat[20][20], rows, cols, n, p, f , l, t;
    p = 1;
    rows = 5, cols = 5;
    n = 5;
    for(i = 0 ; i < rows ; i++)
    {
        for(j = 0 ; j < cols ; j++)
        {
            mat[i][j] = p;
            p++;
        }
    }

    printMatrix(mat, rows, cols);
    puts("");

    for(i = 0 ; i < rows; i++)
    {
        if(i%2 == 0)
        {
            t = mat[i][cols - 1];
            for(j = cols - 1; i >= 1 ; j--)
            {
                mat[i][j] = mat[i][j-1];
            }
            mat[i][0] = t;
        }

        else 
        {
            t = mat[i][0];
            for(j = 1; j < cols ; j++)
            {
                
            }
        }
    }

    return 0;
}