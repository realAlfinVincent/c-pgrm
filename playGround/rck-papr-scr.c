#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int user, computer;
    srand(time(NULL));

    while (1)
    {
        printf("\nRock-Paper-Scissors Game\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissors\n");
        printf("0. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &user);

        if (user == 0)
        {
            printf("Goodbye!\n");
            break;
        }

        if (user < 1 || user > 3)
        {
            printf("Invalid choice. Try again.\n");
            continue;
        }

        computer = (rand() % 3) + 1;

        printf("Computer chose: ");
        if (computer == 1)
        {
            printf("Rock\n");
        }
        else if (computer == 2)
        {
            printf("Paper\n");
        }
        else
        {
            printf("Scissors\n");
        }

        if (user == computer)
        {
            printf("It's a tie!\n");
        }
        else if ((user == 1 && computer == 3) ||
                 (user == 2 && computer == 1) ||
                 (user == 3 && computer == 2))
        {
            printf("You win!\n");
        }
        else
        {
            printf("Computer wins!\n");
        }
    }

    return 0;
}
