#include <stdio.h>
void main(){
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j%2 == 0)
            {
                printf("*");
            }
            else printf("#");
            
        }
        printf("\n");
    }
    


}