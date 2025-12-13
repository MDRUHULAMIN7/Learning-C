#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0));

    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    // printf("Random Number %d\n", randomNumber);
    do
    {
        printf("Guess the number:");
        scanf("%d", &guessed);
        if (guessed < randomNumber)
        {
            printf("lower number please guesse greater number\n");
        }
        else if(randomNumber < guessed)
        {
            printf("greater number please guesse lower number\n");
        }
        else{
            printf("Congrats !!\n");
        }
        no_of_guesses++;
    } while (guessed != randomNumber);

    printf("you have gussed the number in %d guesses", no_of_guesses);
}

/*
e will write a program that generates a random number and asks the player to guess
it. If the player’s guess is higher than the actual number, the program displays “Lower
number please”. Similarly, if the user’s guess is too low, the program prints “Higher
number please”.
When the user guesses the correct number, the program displays the number of
guesses the player used to arrive at the number.
Hint: Use loop & use a random number generator.*/