#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int i, k = 0;
    char ch;
    FILE *sfp, *tfp;
    char sFile[50], tFile[50];

    if(argc < 2)            //neither source or target file mentioned
    {
        printf("Enter source file: ");
        gets(sFile);
    }
    else                    //atleast source file mentioned
    {
        strcpy(sFile, argv[1]);
    }

    if(argc < 3)            //target file not mentioned
    {
        printf("Enter target file: ");
        gets(tFile);
    }
    else                    //target file mentioned
    {
        strcpy(tFile, argv[2]);
    }

    sfp = fopen(sFile, "r");
    if(sfp == NULL)
    {
        printf("%s file dont exist\n", sFile);
        fclose(sfp);             
        exit(1);
    }
    //sfp = fopen((argv[1]), "r");
    tfp = fopen(tFile, "w");
    i = 0;
    while((ch = getc(sfp)) != EOF)
        putc(ch, tfp);
    printf("File copied succesfully\n");
    fclose(sfp);
    fclose(tfp);
    return 0;
}