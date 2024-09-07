// Program to input to a 2D array and print it

#include <stdio.h>

int main(void)
{
    int mat[20][20] =   {
                            {34, 67, 32, 85, 94},
                            {83, 56, 38, 94, 73},
                            {37, 68, 43, 98, 46}
                        } ;
    int rows, cols ;
    int i, j ;
    int rowSum, tot ;
    int colSums[20] = {0}; // Fill all elements with zeroes

    rows = 3 ;
    cols = 5 ;

    // printf("Rows ? ") ;
    //  scanf("%d", &rows) ;

    // printf("Cols ? ") ;
    //  scanf("%d", &cols) ;

    // // Input elements
    // for (i = 0; i < rows ; i++)
    // {
    //     printf("Row # %d:\n", i+1) ;
    //     for (j = 0; j < cols; j++)
    //     {
    //         printf("\tCol # %d :", j+1) ;
    //          scanf("%d", &mat[i][j]) ;
    //     }
    // }


    // Print the matrix
    for (i = 0; i < rows ; i++)
    {
        rowSum = 0 ;
        for (j = 0; j < cols; j++)
        {
             printf("%4d", mat[i][j]) ;
             rowSum += mat[i][j] ;
             colSums[j] += mat[i][j] ;
        }
        printf("%8d\n", rowSum) ;
    }

    // Printing the column sums
    tot = 0 ;
    puts("") ;
    for (j = 0; j < cols; j++)
    {
        printf("%4d", colSums[j]) ;
        tot += colSums[j] ;
    }
    printf("%8d\n", tot) ;

}


/*
printf("%d\n", 35) ;            // 35
printf("%5d\n", 35) ;           // ...35
printf("%5d\n", 235) ;          // ..235
printf("%5d\n", 7235) ;         // .7235
printf("%5d\n", 97235) ;        // 97235
printf("%5d\n", 637235) ;       // 637235
*/




/*
Row # 1:
    Colo # 1 : 86
    Colo # 2 : 35
    Colo # 3 : 75
    Colo # 4 : 36
    Colo # 5 : 28

Row # 2:
    Colo # 1 : 43
    Colo # 2 : 
    Colo # 3 : 75
    Colo # 4 : 36
    Colo # 5 : 28
Row # 3:
    Colo # 1 : 86
    Colo # 2 : 35
    Colo # 3 : 75
    Colo # 4 : 36
    Colo # 5 : 28

rowSum = 0 + 12 + 36
colSums
[ 0| 0| 0 | 0 | 0 |0 ]
 +   + +    +   +
 7  98 23   6   4
12  36  
   7  98  23   6   4    138
  12  36  84  76  91    253
   6   7   8   4   1     26

  25  141 156 86  95   4523  
*/




