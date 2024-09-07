#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j, k, roll[20], tsub, sub[20][3], total[20], temp;
    char name[20][31], t[31];

    n = 3; // no. of student

    // printf("Enter the no. of student will be in the marksheet: ");
    // scanf("%d", &n);

    tsub = 3; //no. of subjects
    

    for(i = 0 ; i < n ; i++)
    {   

        printf("Enter details of student %d:\n", i + 1);
        printf("Rollno. : ");
        scanf("%d", &roll[i]);
        fflush(stdin);
        printf("Name: ");
        gets(name[i]);
        
        temp = 0;
        for(j = 0 ; j < tsub ; j++)
        {
            printf("Enter marks obtained in subject %d: ", j + 1);
            scanf("%d", &sub[i][j]);
            temp = temp + sub[i][j];
        }

        total[i] = temp;
        

    }

    for( i = 0 ; i < n - 1 ; i++)
        for( j = i + 1 ; j < n ; j++)
            if (total[i] < total[j])
            {
                //swap total[i], total[j]
                temp = total[i];
                total[i] = total[j];
                total[j] = temp;

                //swap roll[i], roll[j]
                temp = roll[i];
                roll[i] = roll[j];
                roll[j] = temp;

                //swap string name[i], name[j]
                strcpy(t, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], t);

                for(k = 0 ; k < 3; k++)
                {
                    //swap sub[i][k], sub[j][k]
                    temp = sub[i][k];
                    sub[i][k] = sub[j][k];
                    sub[j][k] = temp;
                }

            }


    //printing
    // puts("Roll no.     Name              Subject 1        Subject 2        Subject 3   Average             Total");
    // puts("========     =============     =========        =========        =========   =======             =====");
       //  2            hbjnk             64               53               50         84.000000            253

    printf("Roll %-30s sub1 sub2 sub3 Average Total\n", "Name");
    printf("---- %-30s ---- ---- ---- ------- -----\n", "----");

    for(i = 0 ; i  < n ; i++)
    {
        printf("%4d %-30s %4d %4d %4d %7.2f %5d\n", roll[i], name[i], sub[i][0], sub[i][1], sub[i][2], total[i] / 3.0, total[i]);
    }

    return 0;
}