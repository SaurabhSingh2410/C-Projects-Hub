#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int target = rand() % 100 + 1;
    int b;

    printf("Guess the number (1 to 100): ");
    scanf("%d", &b);

    while (b != target)
    {
        if (target > b)
        {
            printf("Too low! Aim higher...\n");
        }
        else if (target < b)
        {
            printf("Too high! Bring it down...\n");
        }

        printf("Guess again: ");
        scanf("%d", &b);
    }

    if (target == b)
    {
        printf("You got it bruhh!\n");
    }

    return 0;
}