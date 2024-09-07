#include <stdio.h>

void main()
{
    int k = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            //k = k - 1;
            //printf("%d ", k);
            printf("%d ", j);
        }
        
        printf("\n");
    }
    for (int m = 1; m <= 5; m++)
    {
        for (int n = 1; n <= m; n--)
        {
            printf("%d ", n);
        }
        
        printf("\n");
    }
    
}
