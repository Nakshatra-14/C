#include <stdio.h>

int main() {
    int v;
    printf("Rules:\nUse 1 = to find the Distance\nUse 2 = to find the Speed\nUse 3 = to find Time\nEnter the Value: ");
    scanf("%d", &v);
    if (v == 1)
    {   int speed, time;
        printf("Finding Distance\n");
        printf("Enter the speed: ");
        scanf("%d", &speed);
        printf("Enter the time taken: ");
        scanf("%d", &time);
        printf("The value of distance: %d\n", speed * time);
    }
    else if (v == 2)
    {
        int distance, time;
        printf("Finding Speed\n");
        printf("Enter the distance: ");
        scanf("%d", &distance);
        printf("Enter the time taken: ");
        scanf("%d", &time);
        printf("The value of speed: %d\n", distance / time);
    }
    else if (v == 3)
    { 
        printf("Finding Time\n");
        int distance, speed;
        printf("Enter the distance: ");
        scanf("%d", &distance);
        printf("Enter the speed: ");
        scanf("%d", &speed);
        printf("The value of time: %d\n", distance / speed);
    }
    else printf("Invalid input");
    printf("***Thanks for using***");
    
    return 0;
}