#include <stdio.h>

int main(void)
{
    int n = 123;
    int ar[50];
    int i = 0, j, temp, d = 0, l = 0, size, num = 0;
    printf("n = %d\n", n);
    while(n != 0 )
    {
        temp = n % (num+10);
        ar[i] = temp;
        l++;
        i++;
    }
    size = sizeof(ar)/sizeof(ar[0]);
    for(i = 0 ; i < size ; i++)
        printf("%d ", ar[i]);

    puts("");    
    // printf("s = %d\n", s);

    return 0;
}