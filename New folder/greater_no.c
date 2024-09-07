#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the First value: ");
    scanf("%d", &a);
    printf("Enter the Second value: ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("%d is greatest", a);
    }
    else printf("%d is greatest", b);
    
    return 0;
}