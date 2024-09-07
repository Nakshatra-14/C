#include <stdio.h>

void printArray(int ar[], int n)
{
    int i;
    for(i = 0 ; i < n ; i++)
        printf("%3d", ar[i]);

    puts("");    
}

int main()
{
    int ar[] = {25, 72, 89, 32, 12, 56, 21, 39, 53, 61};
    int n = sizeof(ar)/sizeof(ar[0]);
    int i , j, t;

    puts("Array before swaping");

    printArray(ar, n);

    for( i = 0 ; i < n - 1 ; i++)
        for( j = i + 1 ; j < n ; j++)
            if (ar[i] > ar[j])
            {
                //swap ar[i], ar[j]
                t = ar[i];
                ar[i] = ar[j];
                ar[j] = t;
            }

puts("Array after swapiing"); 

printArray(ar, n);

    return 0;
}