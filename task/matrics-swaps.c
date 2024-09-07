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

    f = 0, l = n - 1;
    while (f < l)
    {
        //swapping mat[f][f] and mat[l][l]
        t = mat[f][f];
        mat[f][f] = mat[l][l];
        mat[l][l] = t;

        //swaping mat[f][l] mat[l][f]
        t = mat[l][f];
        mat[l][f] = mat[f][l];
        mat[f][l] = t;

        f++;
        l--;
    }

printMatrix(mat, rows, cols);

    return 0;
}