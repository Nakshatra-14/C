#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    int i, j, n, t;
    n = argc - 1;
    int* ar;
    ar = (int*)malloc(n * sizeof(int));
    for(i = 0 ; i < n ; i++)
        ar[i] = atoi(argv[i+1]);
    for(i = 0 ; i < n - 1 ; i++)
        for(j = i + 1 ; j < n ; j++)
            if(ar[i] > ar[j])
            {
                //swap ar[i], ar[j]
                t = ar[i];
                ar[i] = ar[j];
                ar[j] = t;
            }
    for(i = 0 ; i < n ; i++)
        printf("%d\n", ar[i]);        
    return 0;
}