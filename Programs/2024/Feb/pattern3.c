#include <stdio.h>

void main()
{
    int k = 0;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            k = k + 1;
            printf("%d ", k);
        }
        printf("\n");
    }
}