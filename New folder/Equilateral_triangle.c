#include <stdio.h>
#include<math.h>

int main() {
    int l;
    printf("Enter the length of one side of the equilateral triangle: ");
    scanf("%d", &l);

    double squareroot = sqrt(3);
    // double l2 = l * l;
    // double l3 = squareroot / 4.0;
    double area = /*(squareroot / 4.0 )*/ 1.732 * (l * l)/4;

    printf("Area of a equilateral triangle is: %d", area);

    return 0;
}