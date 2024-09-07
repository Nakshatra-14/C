#include <stdio.h>

int main() {
    int a, b, c = 0, k;
    printf("Enter the range: ");
    scanf("%d", &a);
    printf("Enter the range %d to: ", a);
    scanf("%d", &b);
    for (int i = a; i <= b; i++)
    {
        // k=i%2;
        // if (k == 0)
        // {
        //     printf("%d ", i);       //add this to to count the event no. only
        // }
        
        printf("%d ", i);
    }
    return 0;
}