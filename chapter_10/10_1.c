/*  Modified stack example of section 10.2 so that it stores
    characters instead of integers. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

/* prototypes */
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
    char ch;

    printf("Enter parenthesis and/or braces: ");
    // While loop to read each input by the user with the getchar function
    while((ch = getchar()) != '\n')
    {
        if (ch == '{' || ch == '[' || ch == '(') // Stacks on the parentheses into the array
        {
            push(ch);
        } else if (ch == '}' || ch == ']' || ch == ')')
        {
            // Pops the stack and checks if the item popped is a matching parenthesis or brace
            char top_char = pop();
            if ((ch == '}' && top_char != '{') ||
                (ch == ']') && top_char != '[' ||
                (ch == ')' && top_char != '('))
            {
                printf("Parenthesis/Braces aren't matched\n");
                exit(EXIT_FAILURE);
            }
        } else
        {   // Exits if the user inputs a character other than a parenthesis/brace
            printf("Error: Wrong character entered\n");
            exit(EXIT_FAILURE);
        }
    }
    if (is_empty())
    {
        // If the stack is empty then everything matchers
        printf("Parenthesis/Braces are matching\n");
    } else
    {
        // Items in the stack means the parenthesis/braces didn't match
        printf("Parenthesis/Braces aren't matched\n");
    }

    exit(EXIT_SUCCESS);
}

// Makes the stack start at element 0
void make_empty(void)
{
    top = 0;
}

// True if the current position in the stack is the first element
bool is_empty(void)
{
    return top == 0;
}

// True if the current position in the stack is the last element
bool is_full(void)
{
    return top == STACK_SIZE;
}

// Adds a character to the next element position in the stack
// Calls the stack_overflow function if the stack is full
void push(char i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

// Lowers the position in the array to the previous element
// Calls the stack_underflow function if the stack is empty
char pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

// Exits the program if the stack overflows
void stack_overflow(void)
{
    printf("Error: Stack Overflow\n");
    exit(EXIT_FAILURE);
}

// Exits the program if the stack underflows
void stack_underflow(void)
{
    printf("Parenthesis/Braces aren't matched\n");
    exit(EXIT_FAILURE);
}
