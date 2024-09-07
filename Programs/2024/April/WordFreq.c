#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char line[81], ch;
    char *r;

    fp = fopen("text.txt", "r");
    if (fp == NULL)
    {
        puts("File not found\n");
        exit(1);
    }

    while (1)
    {
        r = fgets(line, 81, fp);
        if (r == NULL)
            break;
        printf(line);
    }

    fclose(fp);
    return 0;
}