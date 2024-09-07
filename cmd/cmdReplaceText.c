//.\cmdReplaceText source.txt a target.txt x
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    char ch, s, t;
    FILE *sfp, *tfp;

    //if less than 5 argument
    if(argc < 5)
        {
            puts(".\\FILENAME source.txt A target.txt X");
            exit(1);
        }
    s = argv[2][0];
    t = argv[4][0];
    sfp = fopen(argv[1], "r");
    if(sfp == NULL)
    {
        puts("Source file do not exist");
        exit(2);
    }
    tfp = fopen(argv[3], "w");
    while((ch = getc(sfp)) != EOF)
    {
        if(ch == s)
            ch = t;
        putc(ch, tfp);
    }
    fclose(sfp);
    fclose(tfp);
    return 0;
}