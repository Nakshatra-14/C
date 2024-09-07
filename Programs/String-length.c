#include <stdio.h>

int main()
{
    char str[20];
    int i;

    printf("Enter String value: ");
    gets(str);

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    
    // puts("");
    // puts(str);
    
    printf("Length: %d", i);

    return 0;
}