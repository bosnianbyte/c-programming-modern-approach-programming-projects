/*  A program that asks for a series of integers to store in an array. Then sorts the integers by calling the function selection_sort.
    - Selection sort searches the array to find the largest element then moves it to the last position in the array.
    - Then calls itself recursively to sort the first n - 1 elements of the array. */

#include <stdio.h>
#include <stdlib.h>

// Defines the size of the array as ahving 10 elements
#define N 10

// Prototype for the sorting function
void selection_sort(int array[], int n);

int main(void)
{
    int number, array[N];

    printf("Enter %d integers: ", N);

    // Collects each integers into the array
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }

    // Calls the function to sort the integers
    selection_sort(array, N);

    printf("In sorted order: ");
    int i;

    // Prints the array after being sorted
    for (i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    exit(EXIT_SUCCESS);
}

void selection_sort(int array[], int n)
{
    // Stops the recursion when it reaches the end of sorting
    if (n <= 1) return;

    int max = 0;
    // Finds the largest integer and saves it as 'max'
    for (int i = 1; i < n; i++)
    {
        if (array[i] > array[max])
        {
            max = i;
        }
    }
    // Swaps the max number for the array position n - 1
    int temp = array[max];
    array[max] = array[n - 1];
    array[n - 1] = temp;

    // Calls the sorting function to recursively sort the rest of the elements in the array
    selection_sort(array, n - 1);
}
