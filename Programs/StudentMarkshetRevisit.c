#include <stdio.h>
#include <string.h>

typedef struct 
{
    int roll;
    char name[40];
    int subs[3];
    int tot;
} Stu;

Stu readData(void)
{
    Stu s;
    int j;
    printf("Rollno.: ");
    scanf("%d", &s.roll);
    fflush(stdin);
    printf("Name: ");
    gets(s.name);
    s.tot = 0;
    for (j = 0; j < 3; j++)
    {
        printf("Marks in subject %d: ", j + 1);
        scanf("%d", &s.subs[j]);
        s.tot += s.subs[j];
    }
    return s;
}

void inputData(Stu *sp)
{
    int j;
    printf("Rollno.: ");
    scanf("%d", &sp->roll);
    fflush(stdin);
    printf("Name: ");
    gets(sp->name);
    sp->tot = 0;
    for (j = 0; j < 3; j++)
    {
        printf("Marks in subject %d: ", j + 1);
        scanf("%d", &sp->subs[j]);
        sp->tot += sp->subs[j];
    }
}

void printData(Stu s)
{
    printf("%4d %-30s %4d %4d %4d %7.2f %5d\n", s.roll, s.name, s.subs[0], s.subs[1], s.subs[2], s.tot / 3.0, s.tot);
}

void outputData(Stu *sp)
{
    printf("%4d %-30s %4d %4d %4d %7.2f %5d\n", sp->roll, sp->name, sp->subs[0], sp->subs[1], sp->subs[2], sp->tot / 3.0, sp->tot);
}

int main()
{
    Stu ar[100]; // ar is an array of 100 elements of each type Stu
    int n, i, j;
    Stu temp;
    printf("Enter the no. of student will be in the marksheet: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Student %d: \n", i + 1);
        //ar[i] = readData();
        // OR
        inputData(&ar[i]);
        // OR
        // inputData(ar + i);
    }

    // sorting
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (ar[i].tot < ar[j].tot)
            {
                // swap ar[i], ar[j]
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    // printing
    printf("roll %-30s Sub1 Sub2 Sub3 Average Total\n", "Name");
    printf("---- %-30s ---- ---- ---- ------- -----\n", "----");
    for (i = 0; i < n; i++)
    {
        //printData(ar[i]);
        // OR
         outputData(&ar[i]);
        // OR
        // outputData(ar + i);
    }

    return 0;
}