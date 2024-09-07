#include <stdio.h>

int main() {
    int a, b, r, i, n;
    printf("Enter the range: ");
    scanf("%d", &a);
    printf("Enter the  range %d",a);
    printf(" to: ");
    scanf("%d", &b);

    for (i = a; i <= b; i++)
    {
        for (int j = 1; j <= i; j++)
        {
        
        
        if (i%j == 0)
        {
           n = n + 1;
        }
        }
        
    }
    if (n == 2)
    {
        printf("The prime no. are : %d", i);
    }
    n = 0;
    
    
    return 0;
}