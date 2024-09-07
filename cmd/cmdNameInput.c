#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    int n, i, j;
    char ch, name[20];
    FILE *tfp;
    printf("Enter no. of names: ");
    scanf("%d", &n);
    fflush(stdin);
    tfp = fopen("names.txt", "a");
    for(i = 0 ; i < n ; i++)
    {
        printf("Enter the name %d : ", i + 1);
        gets(name);
        for(j = 0 ; name[j] != '\0' ; j++)
        {  
            putc(name[j], tfp);
        }
            putc('\n', tfp);
    }
    fclose(tfp);
    return 0;
}