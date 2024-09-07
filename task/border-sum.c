#include<stdio.h>

    int borderSum (int mat[][20], int rows, int cols)
    {
        int i, j, sum;
        sum = 0;
        
            //top and bottom
            for(j = 0 ; j < cols; j++)
            {
                sum = sum + mat[0][j] + mat[rows - 1][j];
            }
            //left and right
            for(i = 1 ; i < rows - 1; i++)
            {
                sum = sum + mat[i][0] + mat[i][cols - 1];
            }
            return sum;

    }
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
      int rows, cols, mat[20][20] = {
        {1,2,3,1},
        {4,5,6,2},
        {7,8,9,3}
        };
    rows = 3, cols = 4;
            printMatrix(mat, rows, cols);
            printf("Sum of the border of the matrix is %d", borderSum(mat, rows, cols));

        return 0;
        
 }