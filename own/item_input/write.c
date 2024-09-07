#include <stdio.h>

int main(void)
{
    char ch;
    FILE *fp;
    fp = fopen("write.txt", "w");
    if (fp == NULL)
    {
        printf("File not found\n");
        return 1;
    }
    printf("Enter the text to write to the file: ");
    gets(ch);
    while(1)
    {
        getc(fp) = ch;
        if(ch == 10)
            break;
    }
    fclose(fp);
    return 0;
}

