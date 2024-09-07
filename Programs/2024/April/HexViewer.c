#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Hex(int digit)
{
    if (0 <= digit && digit <= 9)
        return digit + '0';
    else
        return digit - 10 + 'A';
}

void intToHex(char hex[], int n)
{
    hex[0] = Hex(n / 16);
    hex[1] = Hex(n % 16);
    hex[2] = '\0';
}

int main(void)
{
    FILE *fp;
    char hex[30], ch, line[11];
    char *r;
    int i, j;

    fp = fopen("Wordfreq.exe", "r");
    if (fp == NULL)
    {
        puts("File not found\n");
        exit(1);
    }
    i = 0;
    j = 0;
    while ((ch = getc(fp)) != EOF)
    {
        line[j] = ch >= 32 ? ch : '?';
        //intToHex(hex, ch); //using the function
        sprintf(hex, "%02X", ch);
        printf("%s ", hex);
        i++;
        j++;
        if(i%10 == 0)
        {
            line[j] = '\0';
            printf("\t%s\n", line);
            j = 0;
        }
    }

    if (j > 0)
    {
        while(j < 10)
            {
                printf("   ");
                j++;
            }
        line[j] = '\0';
        printf("\t%s\n", line);
    }

    fclose(fp);

    // int a = 14;
    // char hex[20];
    // intToHex(hex, a);
    // puts(hex);
    return 0;
}