#include <stdio.h>

void printMatrix(int mat[][100], int rows, int cols)
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
    int i, j, f, l, n, rows, cols, mat[100][100], c, sum, p, x;

    // printf("Enter no. of element per side: ");
    // scanf("%d", &n);
    n = 100;

    p = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            mat[i][j] = p;
            p++;
        }
    }
    
    c = n - 1;

    //input
    // for(i = 0 ; i < rows ; i++)
    // {
    //     for(j = 0 ; j < cols ; j++)
    //     {
    //         printf("Row: %d\n", i++);
    //         printf("Column %d: ", j++);
    //         scanf("%d", &mat[i][j]);
    //     }
    // }


        // my code
        //printMatrix(mat, n, n);
        //puts("");
        //   sum = 0;
        //   for(i = 0 ; i < n ; i++)
        //   {
        //       for(j = 0 ; j < n ; j++)
        //       {
        //           if(i == j || j == c)
        //           {
        //             sum += mat[i][j];
        //             //printf("%d\n", mat[i][j]);
        //           }
        //       }
        //     c--;
        //   }

        // sir code
        sum = 0;
        for (i = 0; i < n; i++)
        {
            sum += mat[i][i] + mat[i][c];
            c--;
        }

        if (n % 2 == 1) // if n is odd
        {
            c = n / 2; // middle point
            sum -= mat[c][c];
        }

         printf("Sum of the principal diagonal is %d", sum);

    return 0;
}