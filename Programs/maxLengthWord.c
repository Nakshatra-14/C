#include <stdio.h>
#include <string.h>

int main()
{
    int i, f, j, k, len, max;
    char str[100], word[20];

    printf("Input: ");
    gets(str);
    max = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            continue;

        f = i;

        while (str[i] != '\0' && str[i] != ' ')
            i++;

        len = i - f;
        if (max < len)
            max = len;
        i--;
    }

    printf("The max length word is %d letters\n", max);

    return 0;
}