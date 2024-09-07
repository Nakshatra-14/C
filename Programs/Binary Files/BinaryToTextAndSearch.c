#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char calcGrade(float mark)
{
    // 85-100   S
    // 75*84    A
    // 65-74    B
    // 55-64    C
    // 50-54    D
    // 0-49     F

    if (100 > mark && mark > 85)
        return 'S';
    else if (84 > mark && mark > 75)
        return 'A';
    else if (74 > mark && mark > 65)
        return 'B';
    else if (64 > mark && mark > 55)
        return 'C';
    else if (54 > mark && mark > 50)
        return 'D';
    else
        return 'F';
}

typedef struct
{
    char name[50];
    int sub1, sub2, sub3, roll;
} Stu;

int main(void)
{
    Stu s;
    char line[50];
    int n, t, f;
    FILE *fp;
    printf("Enter the rollno. : ");
    scanf("%d", &n);
    fp = fopen("student.dat", "rb");
    if (fp == NULL)
    {
        puts("File not found");
        exit(1);
    }
    f = 0;
    while (fread(&s, sizeof(Stu), 1, fp) == 1)
    {
        if (n == s.roll)
        {
            t = s.sub1+s.sub2+s.sub3;
            printf("Name: %s\nRolln. : %d\nSubject 1 mark: %d\nSubject 2 mark: %d\nSubject 3 mark: %d\nTotal: %d\nAverage: %f\nGrade: %c\n", 
                    s.name, s.roll, s.sub1, s.sub2, s.sub3, t, t/3.0, calcGrade(t/3.0));
            f = 1;
            break;        
        }
    }

    if(f == 0)
        puts("Student not found");

    // printf("Succesfully saved %d names in student.dat", n);

    fclose(fp);

    return 0;
}