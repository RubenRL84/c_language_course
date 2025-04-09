#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL)); // Inicializa a semente
    int guess = 0;
    int tries = 0;
    int random_number = (rand() % 21);
    int MAX_TRIES = 5;
    printf("This is a guessing game.\n");
    printf("I have chosen a number between 0 and 20 which you must guess.\n");

    while(tries <= (MAX_TRIES-1))
    {
        printf("Insert a number: ");
        scanf("%d", &guess);

        if( guess != random_number)
        {
            tries +=1;
            printf("You have %d left\n", (MAX_TRIES- tries));
            if (guess < random_number)
                printf("Sorry, %d is wrong. My number is bigger than that\n",guess);
            else
                printf("Sorry, %d is wrong. My number is less than that\n",guess);
        }
        else
            {
                printf("Congratulations. You guessed it!");
                break;
            }

    }
    if (tries == 5)
    printf("You lose, try again!!");
    return 0;
}