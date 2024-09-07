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
    int i, j, f, l, t, rows, cols;
    rows = 3;
    cols = 4;
    int mat[20][20] = {
        {10, 28, 16, 18},
        {25, 9, 11, 17},
        {21, 38, 61, 53}};

    printMatrix(mat, rows, cols);
    puts("");

        //cols reverse
        for (j = 0; j < cols; j++)
        {
            // reverse
            f = 0;
            l = rows - 1;
            while (f < l)
            {
                // swap a[f][j] a[l][j]
                t = mat[f][j];
                mat[f][j] = mat[l][j];
                mat[l][j] = t;
                f++;
                l--;
            }
        }
        //row reverse
        // for (i = 0; i < rows; i++)
        // {
        //     // reverse row i 
        //     f = 0;
        //     l = cols - 1;
        //     while (f < l)
        //     {
        //         // swap a[i][f] a[i][l]
        //         t = mat[i][f];
        //         mat[i][f] = mat[i][l];
        //         mat[i][l] = t;
        //         f++;
        //         l--;
        //     }
        // }
    

    printMatrix(mat, rows, cols);
    return 0;
}