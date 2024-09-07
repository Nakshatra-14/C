#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, tocopy = 1;
    char ch, ans;
    FILE *sfp, *tfp;
    char src[50] = "readme.txt", tgt[50] = "target.txt";
    // printf("Enter the source file name: ");
    // gets(src);
    // printf("Enter the target file name: ");
    // gets(tgt);
    // puts("helloo");
    sfp = fopen(src, "r");
    if (sfp == NULL)
    {
        printf("File %s does not exist\n", src);
        exit(1);
    }

    tfp = fopen(tgt, "r");
    if (tfp != NULL)
    {
        printf("The file %s already exist, do you want to overwrite [y/n] ?", tgt);
        scanf("%c", &ans);
          
        if (ans == 'y')
        {
            fclose(tfp);
        }

        else
        {
            //printf("Exiting\n");
            tocopy = 0;
        }
    }

    // else 
    // {
    //     //printf("The %s file do not exist\n", tgt);
    //     f = 0;
    // }

    if(tocopy == 1)
    {
        puts("File copying");
        tfp = fopen(tgt, "w");
            i = 0;
            while ((ch = getc(sfp)) != EOF)
            {
                if (ch == 10)
                {
                    i++;
                }
            
                if (i % 2 == 1)
                {
                    putc(ch, tfp);
                }
            }
            printf("File copied successfully\n");
    }

    fclose(sfp);
    fclose(tfp);
}
