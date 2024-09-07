#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch;
    int n;
    float g;

    FILE *fp;
    fp = fopen("data.dat", "rb"); // open the file to read in binary mode


    fread(&g, sizeof(float), 1, fp);
    fread(&ch, sizeof(char), 1, fp);
    fread(&n, sizeof(int), 1, fp);
    
    printf("%d\n", n);
    printf("%f\n", g);
    printf("%c\n", ch);
    
    fclose(fp);

    // puts("file saved succcesfully");

    return 0;
}