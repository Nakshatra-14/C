#include <stdio.h>
#include <string.h>

void printStringArray(char ar[][16], int n)
{
    int i;
    for(i = 0 ; i < n ; i++)
        printf("%s \n", ar[i]);

    puts(""); 
}

int main()
{
    int i, j, f, k, n, c;
    char str[100], word[16];

    printf("Input: ");
    gets(str);
    c = 0 ;
    for(i = 0 ; str[i] != '\0' ; i++)
    {
        if(str[i] == ' ')
           continue;

        f = i;

        while(str[i] != '\0' && str[i] != ' ')
             i++;
        i--;

        k = 0;
        for( j = f ; j <= i ; j++)
        {
            word[k] = str[j];
            k++;
        }
        word[k] = '\0';
        if(strcmpi("a", word) == 0 || strcmpi("an", word) == 0 || strcmpi("the", word) == 0)
            c++;
    }

    if(c == 0)
        puts("No article found");

    else
        printf("Found %d article", c);    
    return 0;
}