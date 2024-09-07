#include <stdio.h>
#include <string.h>

void printStringArray(char ar[][16], int n)
{
    int i;
    for(i = 0 ; i < n ; i++)
        printf("%s \n", ar[i]);

    puts(""); 
}

int main (){

    int i, w, f, j, k, n;
    char str[100], words[20][16], t[20];
    
    printf("Input: ");
    gets(str);
    puts(str);

    w = 0;
    for(i = 0 ; str[i] != '\0' ; i++)
    {
        if(str[i] == ' ')
           continue;

        f = i;

        while(str[i] != '\0' && str[i] != ' ')
             i++;
        i--;
        //printf("f = %d, i = %d\n", f, i);
        k = 0;
        for( j = f ; j <= i ; j++)
        {
            words[w][k] = str[j];
            //printf("it is %c\n", str[j]);
            k++;
        }
        words[w][k] = '\0';
        //puts(words[w]);
        w++;
    }
    //puts("Bye");

    n = w;
    for( i = 0 ; i < n - 1 ; i++)
        for( j = i + 1 ; j < n ; j++)
            if (strcmpi(words[i], words[j]) > 0 )
            {
                //swap string str[i], str[j]
                strcpy(t, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], t);
            }
    printStringArray(words, w);
    
    return 0;
}