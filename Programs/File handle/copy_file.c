#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    char ch;
    FILE *sfp, *tfp;
    char src[50], tgt[50];
    printf("Enter the source file name: ");
    gets(src);
    printf("Enter the target file name: ");
    gets(tgt);
    sfp = fopen(src, "r");
    if(sfp == NULL)
    {
        printf("File does not exist\n");
        exit(1);
    }
    tfp = fopen(tgt, "w");
    i = 0;
    while((ch = getc(sfp)) != EOF)
    {
        putc(ch, tfp);
    }
    printf("File copied successfully\n");
    fclose(sfp);
    fclose(tfp);
}

