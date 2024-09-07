#include <stdio.h>

int main(void)
{
    char ch;
    FILE *fp;
    fp = fopen("readme.txt", "r");
    if (fp == NULL)
    {
        printf("File not found\n");
        return 1;
    }
    // while ((ch = getc(fp)) != EOF)
    // {
    //     printf("%c", ch);
    // }
    while(1)
    {
        ch = getc(fp);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}

