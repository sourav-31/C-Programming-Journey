/*                               GUESS THE NUMBER                                 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber;
    int guessedNumber;
    int no_of_guesses = 0;
    // Seed the random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    randomNumber = rand() % 100 + 1;

    // printf("Random Number: %d\n", randomNumber);

    do
    {
        printf("Guess a Number\t");
        scanf("%d",&guessedNumber);
        if (guessedNumber>randomNumber)
        {
            printf("Lower numbber please\n");
        }
        else if (guessedNumber<randomNumber)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("Congratss!!\n");
        }
        no_of_guesses++;
        
    } while (guessedNumber != randomNumber);

    printf("You Guessed the number in %d guesses",no_of_guesses);
    return 0;
}
