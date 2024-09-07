#include <stdio.h>

int main() {
    int a, b, h, s;
    printf("Rules\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &h);

    if (s == 1)
    {
        int t = (a + b)/2;
        int t2 = (t * h);
        printf("The area of the trapizium: %d", t2);
    }
    else if (s == 2)
    {
        int p = b * h;
        printf("The area of the parallelogram: %d", p);
    }
    // else if (s == 3)
    // {
    //     printf("The area of the")
    // }
    else printf("Invalid innput");
    
    return 0;
}