#include <stdio.h>

int main() {
    char quest, v;
    printf("Enter the question: ");
    scanf("%c", quest);
    printf("Enter True or false: ");
    scanf("%c", &v);
    if (v == "true")
    {
        printf("The question: %c", quest);
        printf("is: %c", v);
    }
    if (v == "false")
    {
        printf("The question: %c", quest);
        printf("is: %c", v);
    }
    
    
    return 0;
}