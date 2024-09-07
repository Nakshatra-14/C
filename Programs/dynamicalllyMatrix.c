#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cols, rows, i, j;
    int **matrix;

    printf("Enter the rows of the matrix: ");
      scanf("%d", &rows);

    printf("Enter the colums of the matrix: ");
      scanf("%d", &cols);
    
    matrix = (int **)malloc(rows * sizeof(int*));

    for(i = 0 ; i < rows ; i++)
    {
        matrix[i] = (int *)malloc(cols * sizeof(int));
        printf("Row %d : \n", i + 1);
        for(j = 0 ; j < cols ; j++)
        {
          printf("\t call %d : ", j + 1);
          scanf("%d", &matrix[i][j]);
        }
    }

    //printing and delocating memory

    for(i = 0 ; i < rows ; i++)
    {
      for(j = 0 ; j < cols ; j++)
      {
        printf("%3d", matrix[i][j]);
      }
      puts("");
      free(matrix[i]);
    }
    
    free(matrix);

    return 0;
}