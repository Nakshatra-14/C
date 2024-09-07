#include <stdio.h>

int main(void)
{
    int c;
    FILE *ptr;
    ptr = fopen("file.txt", "r");
    fscanf(ptr, "%d\n", &c);
    printf("%d\n", c);
    fclose(ptr);
    return 0;
}