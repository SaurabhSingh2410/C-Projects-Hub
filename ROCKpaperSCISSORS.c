#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int round = 0;
    int userChoice;
    int compScore = 0;
    int userScore = 0;

    // srand MUST be outside the loop, otherwise computer picks the same move!
    srand(time(0));

    printf("\n🎮 === ROCK PAPER SCISSORS (BEST OF 3) === 🎮\n");

    while (round < 3)
    {
        printf("\n----------------------------------------\n");
        if (round == 0)
        {
            printf("🥊 THIS IS THE FIRST ROUND 🥊\n");
        }
        else if (round == 1)
        {
            printf("🥊 THIS IS THE SECOND ROUND 🥊\n");
        }
        else if (round == 2)
        {
            printf("🔥 THE FINALE ROUND 🔥\n");
        }
        printf("----------------------------------------\n");

        printf("0 = Rock 🪨\n");
        printf("1 = Paper 📄\n");
        printf("2 = Scissors ✂️\n");
        printf("Enter your choice (0, 1, or 2): ");
        scanf("%d", &userChoice);

        if (userChoice == 0)
            printf("\n👉 You chose Rock!\n");
        else if (userChoice == 1)
            printf("\n👉 You chose Paper!\n");
        else if (userChoice == 2)
            printf("\n👉 You chose Scissors!\n");

        int systemChoice = rand() % 3;

        if (systemChoice == 0)
            printf("💻 Computer chose Rock!\n");
        else if (systemChoice == 1)
            printf("💻 Computer chose Paper!\n");
        else if (systemChoice == 2)
            printf("💻 Computer chose Scissors!\n");

        printf("\n");
        if (userChoice == systemChoice)
        {
            printf(">> This round has been tied! 🤝\n");
        }
        else if ((userChoice == 0 && systemChoice == 2) || (userChoice == 1 && systemChoice == 0) || (userChoice == 2 && systemChoice == 1))
        {
            printf(">> This round has been won by you! 🎉\n");
            userScore++;
        }
        else if ((systemChoice == 0 && userChoice == 2) || (systemChoice == 1 && userChoice == 0) || (systemChoice == 2 && userChoice == 1))
        {
            printf(">> This round has been won by computer! 🤖\n");
            compScore++;
        }
        round++;
    }

    printf("\n========================================\n");
    printf("📊 FINAL SCORE -> You: %d | Computer: %d\n", userScore, compScore);
    printf("========================================\n");

    if (userScore > compScore)
    {
        printf("🏆 YOU HAVE WON THE GAME BRUHHH! 🏆\n\n");
    }
    else if (compScore > userScore)
    {
        printf("You can try again bruhhh 💔\n\n");
    }
    else if (compScore == userScore)
    {
        printf("🤝 THIS GAME HAS BEEN TIED! 🤝\n\n");
    }

    return 0;
}