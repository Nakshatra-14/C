#include <stdio.h>

int main()
{
    int a, b, c = 0;
    printf("Enter the range: ");
    scanf("%d", &a);
    printf("Enter the range %d to: ", a);
    scanf("%d", &b);
    for (int i = a; i <= b; i++)
    {
        c = i + c;
    }

    printf("The sum of the natural no. from %d", a);
    printf(" to %d ", b);
    printf("is %d", c);

    return 0;
}