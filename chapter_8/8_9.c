// A program that generates a random walk across a 10 x 10 array

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
        // 10 x 10 grid of all periods
   char randomwalk[10][10] = {  {'.','.','.','.','.','.','.','.','.','.'},
                                {'.','.','.','.','.','.','.','.','.','.'},
                                {'.','.','.','.','.','.','.','.','.','.'},
                                {'.','.','.','.','.','.','.','.','.','.'},
                                {'.','.','.','.','.','.','.','.','.','.'},
                                {'.','.','.','.','.','.','.','.','.','.'},
                                {'.','.','.','.','.','.','.','.','.','.'},
                                {'.','.','.','.','.','.','.','.','.','.'},
                                {'.','.','.','.','.','.','.','.','.','.'},
                                {'.','.','.','.','.','.','.','.','.','.'}   };
    int i, j, direction;
    char letter = 'A';

    // Initializes C's random number generator
    srand ((unsigned) time(NULL));

    // Starts the random walk with 'A' and position [0][0]
    randomwalk[0][0] = letter;
    ++letter;

    // For loop to perform the random walk
    for (i = 0, j = 0; letter <= 'Z';) {
        direction = rand() % 4; // Randomly selects a direction to go
        
        // Switch statement to go the random direction
        switch (direction) {
            case 0: // Right
            if (j < 9 && randomwalk[i][j + 1] == '.') {
                randomwalk[i][++j] = letter;
                ++letter;
            } else;
            break;

            case 1: // Down
            if (i < 9 && randomwalk[i + 1][j] == '.') {
                randomwalk[++i][j] = letter;
                ++letter;
            } else;
            break;

            case 2: // Left
            if (j > 0 && randomwalk[i][j - 1] == '.') {
                randomwalk[i][--j] = letter;
                ++letter;
            } else;
            break;

            case 3: // Up
            if (i > 0 && randomwalk[i - 1][j] == '.') {
                randomwalk[--i][j] = letter;
                ++letter;
            } else;
            break;
        }
        // Exits random walk (All directions blocked)
        if (randomwalk[i + 1][j] != '.' && randomwalk[i][j + 1] != '.' && randomwalk[i - 1][j] != '.' && randomwalk[i][j - 1] != '.')
                break;
    }

    // Prints the 10 x 10 board
    for (i = 0; i < 10; ++i) {
        for (j = 0; j < 10; ++j) {
            printf("%3c", randomwalk[i][j]);
        }
        printf("\n");
    }

    return 0;
}
