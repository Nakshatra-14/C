#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    char ch;
    FILE *fp;
    fp = fopen("data.txt", "a+");
    if (fp == NULL)
    {
        printf("File not found\n");
        return 1;
    }
    while(1)
    {
    printf("Enter what to do ?\nOption 1: Read the file\nOption 2: Write to the file\nOption 3: Exit\nYour option: ");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("Reading the file\n");
        while (1)
    {
        ch = getc(fp);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }
    }
    else if (n == 2)
    {
        printf("Writing to the file\n");
    }
    else if (n == 3)
    {
        printf("\nExiting the program\n");
        break;
    }
    else
    {
        printf("Invalid option\n");
    }
    }
    fclose(fp);
    return 0;
}

