#include <stdio.h>
#include <string.h>

void printStringArray(char ar[][20], int n)
{
    int i;
    for(i = 0 ; i < n ; i++)
        printf("%s ", ar[i]);

    puts(""); 
}

int main()
{
    int i, j;
    char str[][20] = {"variable", "loop", "module", "class", "condition"}; 
    int n = sizeof(str)/sizeof(str[0]);
    char t[20];

    puts("String before sorting");
    printStringArray(str, n);

    for( i = 0 ; i < n - 1 ; i++)
        for( j = i + 1 ; j < n ; j++)
            if (strcmp(str[i], str[j]) > 0 )
            {
                //swap string ar[i], ar[j]
                strcpy(t, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], t);
            }

    puts("String after sorting");
    printStringArray(str, n);

    return 0;
}