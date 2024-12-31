// A program that generates a random walk across a 10 x 10 array

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_walk(char walk[10][10])
{
    int i, j, direction;
    char letter = 'A';

    // Generates 10 x 10 grid of all periods
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            walk[i][j] = '.';
        }
    }

    // Initializes C's random number generator
    srand ((unsigned) time(NULL));

    // Starts the random walk with 'A' and position [0][0]
    walk[0][0] = letter;
    ++letter;

    // For loop to perform the random walk
    for (i = 0, j = 0; letter <= 'Z';) {
        direction = rand() % 4; // Randomly selects a direction to go
        
        // Switch statement to go the random direction
        switch (direction) {
            case 0: // Right
            if (j < 9 && walk[i][j + 1] == '.') {
                walk[i][++j] = letter;
                ++letter;
            } else NULL;
            break;

            case 1: // Down
            if (i < 9 && walk[i + 1][j] == '.') {
                walk[++i][j] = letter;
                ++letter;
            } else NULL;
            break;

            case 2: // Left
            if (j > 0 && walk[i][j - 1] == '.') {
                walk[i][--j] = letter;
                ++letter;
            } else NULL;
            break;

            case 3: // Up
            if (i > 0 && walk[i - 1][j] == '.') {
                walk[--i][j] = letter;
                ++letter;
            } else NULL;
            break;
        }
        // Exits random walk (All directions blocked)
        if (walk[i + 1][j] != '.' && walk[i][j + 1] != '.' && walk[i - 1][j] != '.' && walk[i][j - 1] != '.')
                break;
    }
}
void print_array(char walk[10][10])
{
    int i, j;
    // Prints the 10 x 10 board
    for (i = 0; i < 10; ++i) {
        for (j = 0; j < 10; ++j) {
            printf("%3c", walk[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    char walk[10][10];

    // Calls the function to generate the walk
    generate_random_walk(walk);
    // Calls the function to print the walk
    print_array(walk);

    exit(EXIT_SUCCESS);
}
