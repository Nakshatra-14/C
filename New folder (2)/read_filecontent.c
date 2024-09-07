#include <stdio.h>

int main(void)
{
    int c;
    FILE *ptr;
    ptr = fopen("file.txt", "r");
    while (1)
    {
        c = fgetc(ptr);
        printf("%c", c);

        if(c == EOF)
            break;
    }
    fclose(ptr);
    return 0;
}