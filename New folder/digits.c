#include <stdio.h>

int main() {
    int n, a, c=0;
    printf("Enter the value: ");
    scanf("%d", &n);
    do
    {
         c = c + 1;
        a = n%10;
        n = n/10;
        printf("No. of Digits = %d\n", a);
    } while (n < 0);
    
        // c = c + 1;
        // a = n%10;
        // n = n/10;
        // printf("The Digits = %d\n", a);
    // printf("No of digits = %d", c);
    
    return 0;
}