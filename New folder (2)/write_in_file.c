#include <stdio.h>

int main(void)
{
    char c = 'A';
    FILE *ptr;
    ptr = fopen("new.txt", "w");
    fputc(c, ptr);
    fclose(ptr);
    return 0;
}