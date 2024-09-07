#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct 
{
    char name[50];
    int sub1, sub2, sub3, roll;
}Stu;

int main(void)
{
    Stu s;
    char line[50];
    int n;
    FILE *sfp, *tfp;
    sfp = fopen("student.txt", "r");
    if(sfp == NULL)
    {
        puts("File not found");
        exit(1);
    }
    tfp = fopen("student.dat", "wb");

    n = 0;
    while(fgets(s.name, 50, sfp) != NULL)
    {    
        s.name[strlen(s.name) - 1] = '\0';
        fgets(line, 50, sfp);
        sscanf(line, "%d %d %d %d", &s.roll, &s.sub1, &s.sub2, &s.sub3);
        fwrite(&s, sizeof(Stu), 1, tfp);
        printf("%s, %d, %d, %d, %d\n", s.name, s.roll, s.sub1, s.sub2, s.sub3);

        n++;
    }
    
    printf("Succesfully saved %d names in student.dat", n);

    fclose(sfp);
    fclose(tfp);
    return 0;
}