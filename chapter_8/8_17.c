// A program that creates a (n x n) magic square

#include <stdio.h>

int main(void)
{
    int num = 1, i, j, N;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    // Asks user for the size
    printf("Enter size of magic square: ");
    scanf("%d", &N);

    // Initializes the array with N number of rows and columns
    int magic_square[N][N] = {0};

    // Loop to assigns each number in the array
    for(i = 0, j = N / 2; num <= N * N; num++) {
        magic_square[i][j] = num;
        int next_i =  (i - 1 + N) % N;
        int next_j = (j + 1) % N;
        if (magic_square[next_i][next_j] != 0) {
            i = (i + 1) % N;
        } else {
            i = next_i;
            j = next_j;
        }
    }

    // Prints the magic square
    for (i = 0; i < N; ++i) {
        for (j = 0; j < N; ++j) {
            printf("%5d", magic_square[i][j]);
        }
        printf("\n");
    }

    return 0;
}
