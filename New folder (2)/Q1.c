//Write a program to read three integers from a file.
#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    FILE *ptr;
    ptr = fopen("int.txt", "r");
    fscanf(ptr, "%d %d %d", &num1, &num2, &num3);
    printf("%d %d %d\n", num1, num2, num3);
    fclose(ptr);
    return 0;
}