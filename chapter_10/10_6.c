/*  A program that evaluates RPN (Reverse Polish Notation) */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define STACK_SIZE 10

/* external variables */
float contents[STACK_SIZE];
int top = 0;

/* prototypes */
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(float result);
float pop(void);
void stack_overflow(void);
void stack_underflow(void);
float calculator(void);

int main(void)
{
    while (1)
        calculator();

    exit(EXIT_SUCCESS);
}
// Calculator
float calculator (void)
{
        char ch;

    printf("Enter an RPN expression: ");
    // While loop to read each input by the user with the scanf function
    while(scanf(" %c", &ch)) {
        // Stacks on the operands into the array
        if (ch >= '0' && ch <= '9')
        {
            push((float) (ch - '0'));
        } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '=')
        {
            if (ch == '=') {
                printf("%.2f\n", contents[top - 1]);
                return 1;
            }
            // Pops the operators out of the array
            float num2 = pop();
            float num1 = pop();
            float result;
            if (ch == '+') 
                result = num1 + num2;
            else if (ch == '-') 
                result = num1 - num2;
            else if (ch == '*')
                result = num1 * num2;
            else if (ch == '/')
                result = num1 / num2;

            push(result);
        } else {
            exit(EXIT_SUCCESS);
        } 
    }
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
void push(float result)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = result;
}

// Lowers the position in the array to the previous element
// Calls the stack_underflow function if the stack is empty
float pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

// Exits the program if the stack overflows
void stack_overflow(void)
{
    printf("Error: Expression is too complex\n");
    exit(EXIT_FAILURE);
}

// Exits the program if the stack underflows
void stack_underflow(void)
{
    printf("Not enough operands in expression\n");
    exit(EXIT_FAILURE);
}
