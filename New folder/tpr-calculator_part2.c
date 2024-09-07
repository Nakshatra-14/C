#include <stdio.h>
int main()
{
    int a;
    printf("***AREA CALCULATOR***\nRules:\n");
    printf("Use 1 for trapizium\nUse 2 = parallogram\nUse 3 = rhombus\nUse 4 = comming soon\n");
    printf("Enter your value: ");
    scanf("%d", &a);
    if (a == 1)
    {
        float b1, b2, h;
        printf("Enter the base 1 of the tarpizium: ");
        scanf("%f", &b1);
        printf("Enter the base 2 of the tarpizium: ");
        scanf("%f", &b2);
        printf("Enter the height of the tarpizium: ");
        scanf("%f", &h);
        float t = (b1 + b2) / 2;
        float t2 = t * h;
        printf("The area of the Trapizium is: %f\n", t2);
    }
    else if (a == 2)
    {
        float l, b;
        printf("Enter the length of the parallelogram: ");
        scanf("%f", &l);
        printf("Enter the breadth of the parallelogram: ");
        scanf("%f", &b);
        float area = b * l;
        printf("The area of the Parallelogram is: %f\n", area);
    }
    else if (a == 3)
    {
        float d1, d2;
        printf("Enter the first diagonal of the rhombus: ");
        scanf("%f", &d1);
        printf("Enter the second diagonal of the rhombus: ");
        scanf("%f", &d2);
        float area = (d1 * d2) / 2;
        printf("The area of the rhombus is: %f\n", area);
    }

    else
        printf("You have entered a Invalid Input please try again\n");

    printf("***THANKS FOR USING***");
    return 0;
}