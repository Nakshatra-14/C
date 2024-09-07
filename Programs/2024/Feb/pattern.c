#include <stdio.h>

int main()
{
    int i, j, k, l;
    for (i = 1; i <= 6; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for (int m = 1; m <= 6; m++)
    {
        for (int o = 6; o > m; o--)
        {
            printf(" ");
        }
        for (int n = 1; n <= m; n++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for (k = 1; k <= 6; k++)
    {
        for (l = 6; l >= k; l--)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for (int p = 1; p <= 6; p++)
    {
        for (int q = 1; q <= p; q++)
        {
            printf(" ");
        }

        for (int r = 6; r >= p; r--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}