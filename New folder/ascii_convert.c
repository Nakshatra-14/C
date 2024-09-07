#include <stdio.h>

int main() {
    int n;
    char c;
    printf("Enter 1 for ascii value\nEnter 2 for charecter\nEnter the value: ");
    scanf("%d", &n);
    
    if (n == 1){
        printf("Enter the charecter: "); 
        scanf("%c", c);
        int a = (int)c;
        printf("The ASCII value of %c", c);
        printf("is %d", a);
    }
    return 0;
}