#include <stdio.h>

int main() {
    int a , c;
    printf("Enter the Multiple number: ");
    scanf("%d", &a);
    for (int i = 1; i <= 10; i++)
    {
        c = a * i;
        printf("%d\n", c);
    }
    return 0;
}