#include <stdio.h>
#include <stdlib.h>
#include <time.h> // for random number generator seed

int main()
{
    int randomNumber = 0;
    int guess = 0;
    int numberOfGuess;
    time_t t;

    // Initialization of random number generator
    srand((unsigned) time(&t));

    // get the random number
    randomNumber = rand() % 21;

    printf("\nThis is a guessing game.");
    printf("\nI have chosen a number between 0 and 20, which you must guess. \n");

    for (numberOfGuess = 5; numberOfGuess > 0; --numberOfGuess) {
        printf("\nYou have %d tr%s left.", numberOfGuess, numberOfGuess == 1 ? "y" : "ies");
        printf("\nEnter a guess: ");
        scanf("%d", &guess);

        if (guess == randomNumber) {
            printf("\nCongratulations. You guesses it!\n");
            break;
        }
        else if (guess < 0 || guess > 20)
            printf("I said the number is between 0 and 20.\n");
        else printf("Sorry, %d is wrong. My number is %s than that.\n", guess, randomNumber > guess ? "greater" : "less");
    }

    printf("\nYou have had five tries and failed. The number was %d\n", randomNumber);

    return 0;
}
