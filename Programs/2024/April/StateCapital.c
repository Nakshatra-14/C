#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    char line[81], state[40], city[44], input[40];
    char *r;
    int i, j, found;

    printf("Enter a State: ");
    gets(input);

    fp = fopen("StatewiseCitiesOfIndia.txt", "r");
    if (fp == NULL)
    {
        puts("File not found\n");
        exit(1);
    }
    found = 0;
    while (fgets(line, 80, fp) != NULL)
    {
        j = 0;
        for (i = 43; line[i] != '\n'; i++) // state
        {
            state[j] = line[i];
            j++;
        }
        state[j] = '\0';
        for (i = 0; i < 43; i++) // city
        {
            city[i] = line[i];
        }
        for (i = 42; i >= 0; i--)
        {
            if (city[i] != ' ')
                break;
            ;
        }
        city[i + 1] = '\0';
        if (strcmpi(input, state) == 0)
        {
            if(found == 0)                                                          //it is the first city of the required state
                printf("Capital of the city is %s and the others city are:\n", city);
            else    
                printf("%s\n", city);
            found = 1;
        }
    }

    if (found == 0)
        puts("Not found");

    fclose(fp);
    return 0;
}