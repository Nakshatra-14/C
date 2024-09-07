#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, iscomment;
    char ch, pch = '\0';
    FILE *sfp, *tfp;
    char src[50], tgt[50];
    // printf("Enter the source file name: ");
    // gets(src);
    // printf("Enter the target file name: ");
    // gets(tgt);
    sfp = fopen("code.txt", "r");
    tfp = fopen("rcomment.txt", "w");
    if (sfp == NULL)
    {
        printf("File does not exist\n");
        exit(1);
    }
    i = 0;
    iscomment = 0;
    while ((ch = getc(sfp)) != EOF)
    {
        if (ch == '/')
        {
            iscomment = 1;

            if (pch != '/')
            {
                iscomment = 0;
                putc(pch, tfp);
            }
        }        
        if (iscomment == 0)
            putc(ch, tfp);

        if (iscomment == 1 && ch == '\n')
            iscomment = 0;
        pch = ch;    
    }
    printf("File copied successfully\n");
    fclose(sfp);
    fclose(tfp);
}
