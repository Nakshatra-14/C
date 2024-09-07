#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)

{
    srand(time(0));
    int player, computer = rand() % 3;

    printf("Enter: ");
    scanf("%d", &player);
    computer = rand() % 3;
    printf("computer choose: %d\n", computer);

    if (player == 0 && computer == 0)
    {
        printf("Its a Draw!\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("You Win!\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("You Lose!\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("You Lose!\n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("Its a Draw!\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("You win!\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("You win!\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("You Lose!\n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("Its a Draw!\n");
    }
    else
    {
        printf("Something went wrong!");
    }
    return 0;
}