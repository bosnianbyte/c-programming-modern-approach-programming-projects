// A program that simulates the game of craps

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>

// Prototypes the functions for rolling the dice and playing the game
int roll_dice(void);
bool play_game(void);
 
int main(void)
{
    int wins = 0, losses = 0;
    char play_again;
    // Initiates the srand function for rolling the dice
    srand((unsigned) time(NULL));

    // Do function to play craps
    do {
        if (play_game())
        {
            printf("You win!\n");
            wins++; // Counts wins
        }
        else
        {
            printf("You lose!\n");
            losses++; // Counts losses
        }
        printf("Play again? ");

        // Gets the 'y' character input from user to play again
        scanf("%c", &play_again);
        play_again = toupper(play_again); // Capitalizes the character

        // Clears the new line character
        while(getchar() != '\n');

    } while (play_again == 'Y');

    // Prints wins and losses
    printf("Wins: %d, Losses: %d\n", wins, losses);

    exit(EXIT_SUCCESS);
}

int roll_dice(void)
{
    // Returns random numbers 1-6 for each dice
    return (rand() % 6 + 1) + (rand() % 6 + 1);
}

bool play_game(void)
{
    int roll = roll_dice();
    printf("You rolled: %d\n", roll);
    if (roll == 7 || roll == 11) // Player wins
        return true;

    else if (roll == 2 || roll == 3 || roll == 12) // Player loses
        return false;

    else
        printf("Your point is %d\n", roll);

    // Saves the initial roll as the point
    int point = roll;

    while(true)
    {
        roll = roll_dice();
        printf("You rolled: %d\n", roll);
        if (roll == point) // Wins if player rolls the point again
            return true;
        if (roll == 7) // Loses if dice's sum is 7
            return false;
    }
}
