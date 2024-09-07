#include <stdio.h>

int main()
{

    int a;
    printf("Rules:\nType 1 to show the asending pyramid and \nType 2 to show the desending pyramid\n");
    printf("Enter the value: ");
    scanf("%d", &a);

    if (a == 1)
    {
        int i, j, rows = 5;
        for (i = 1; i <= rows; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    if (a == 2)
    {
    int i, j, rows = 5;
    for (i = rows; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    }
    else 
    printf("Invalid Input\n");

    printf("***Thanks for using***");
    
    return 0;
}
