#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch;
    int n;
    float g;

    FILE *fp;
    fp = fopen("data.dat", "wb"); // open the file to write in binary mode

    n = 6245;
    g = 3.14;
    ch = 'N';

    fwrite(&g, sizeof(float), 1, fp);
    fwrite(&ch, sizeof(char), 1, fp);
    fwrite(&n, sizeof(int), 1, fp);

    fclose(fp);

    puts("file saved succcesfully");

    return 0;
}