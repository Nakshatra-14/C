#include <stdio.h>

int main()
{
    int i, j, n = 25, t;
    for(i = 32 ; i <= 34 ; i++)
    {
        printf("%d ", i);
        printf("%c\t", i);

        for(j = 1 ; j <= 9 ; j++)
        {
            printf("%d ", i+25);
            printf("%c\t", i+25);
            n = n + 25;
        }

        puts("");
    }
   return 0; 
}