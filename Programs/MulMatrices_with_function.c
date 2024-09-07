#include <stdio.h>

void printMatrix(int mat[][20], int rows, int cols)
{
  int i, j;
  for(i = 0 ; i < rows ; i++)
    {
      for(j = 0 ; j < cols ; j++)
        {
          printf("%5d", mat[i][j]);
        }
      puts("");
    }
}

void MulMatrices(int c[][20],int a[][20], int b[][20], int rows1, int cols1, int cols2)
{
    int i, j, k;
    int sum;
    for(i = 0 ; i < rows1 ; i++)
    {
        for(j = 0 ; j < cols2 ; j++)
        {
            sum = 0;
            for(k = 0 ; k < cols1 ; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }
}

int main(void) {
  // int a[20][20] = {
  //                   {9, 8, 7},
  //                   {6, 5, 4},
  //                   {3, 2, 1}
  // };
  // int b[20][20] = {
  //                   {1, 2, 3},
  //                   {4, 5, 6},
  //                   {7, 8, 9},
  // };
  //int i, j, rows, cols, c[20][20];
//   int a[20][20] = {
//                     {1, 2},
//                     {3, 4}
//   };
//   int b[20][20] = {
//                     {5, 6},
//                     {7, 8}
//   };
int a[20][20] = {
	                {12, 14, 32},
	                {19, 23, 15},

};

int b[20][20] = {
    	            {10, 28, 16, 18},
	                {25, 9, 11, 17},
	                {21, 38, 61, 53}
};

// 1142	  1678	2298	2150
// 1080	  1309	1472	1528

//   rows = 2, cols = 3;
//   for(i = 0; i < rows ; i++)
//     {
//       for(j = 0 ; j < cols ; j++)
//         {
//           c[i][j] = (a[i][j] * b[i][j]) + (a[i][j + 1] * b[i + 1][j]);
//         }
//     }
int rows1, rows2, cols1, cols2, c[20][20];
rows1 = 2;
cols1 = 3;
rows2 = 3;
cols2 = 4;
  printMatrix(a, rows1, cols1);
  puts("");
  printMatrix(b, rows2, cols2);
  puts("");

MulMatrices(c, a, b, rows1, cols1, cols2);
printMatrix(c, rows1, cols2);
  puts("");
  return 0;
}