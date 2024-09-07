//write a program in c consisting stride of 3 and print the numbers from 1 to 100
#include <stdio.h>

int main() {
    int i;
    for(i = 1; i <= 100; i += 3) {
        printf("%d\n", i);
    }
    return 0;
}
