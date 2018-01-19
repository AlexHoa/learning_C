/*Write a program that asks the user for an upper and lower limit for a guessing game.
Generate a random number in this range using the rand function from stdlib.h
Have the user guess this number
Give some higher/lower feedback to the user after each guess.
Keep track of the number of guesses the user needed

Handle possible numeric conversion errors of user input
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main()
{
    // Declaration of the variables
    int upper = 0, lower =0, num2Guess = 0, numberEntered =0, tryNum = 0;
    char numberAsChar[SIZE], *ptr;
    //Asks the user an upper and lower limit
    do
    {
        printf("Enter an upper limit: ");
        fgets(numberAsChar, SIZE , stdin);
        upper = strtol(numberAsChar, &ptr, 10);

        printf("Enter a lower limit: ");
        fgets(numberAsChar, SIZE , stdin);
        lower = strtol(numberAsChar, &ptr, 10);

    }while(upper<lower);

    // Generate a random number in this range using the rand function from stdlib.h
    srand(time(NULL));
    num2Guess = lower + (rand() % (upper - lower +1));

    // Guess the number : Give some higher/lower feedback to the user after each guess
    printf("Try to guess the number between %d and %d\n", lower, upper);

    while (numberEntered != num2Guess)
    {
        // The user enter a number
        fgets(numberAsChar, SIZE , stdin);
        numberEntered = strtol(numberAsChar, &ptr, 10);

        // Compare if its lower or higher to the random number
        if(numberEntered > num2Guess) printf("lower\n");
        else if(numberEntered < num2Guess) printf("higher\n");

        // Count the number of try
        tryNum++;
    }
    printf("You won with %d try", tryNum);

    return 0;
}
