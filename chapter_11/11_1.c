/* 	Asks the user to enter a dollar amount then shows how to pay
	using the smallest numbers of $20, $10, $5, and $1 bills.
    Modified to include a function */
#include <stdio.h>
/* external variables */
int amount, twenties, tens, fives, ones;

/* prototypes */
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{	
	// Prompts user to enter dollar amount
	printf("Enter a dollar amount: ");
	scanf("%d", &amount);

    pay_amount(amount, &twenties, &tens, &fives, &ones);

	// prints the amount of each bill in the amount
	printf("$20 bills: %d\n", twenties);
	printf("$10 bills: %d\n", tens);
	printf("$5 bills: %d\n", fives);
	printf("$1 bills: %d", ones);
	return 0;
}

/* pay_amount:  Determines the smallest number of $20, $10, $5, and $1 bills
                necessary to pay the amount represented by the dollars
                parameter. */
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    // Divides amount by 20 then subtracts by the amount of 20s
	*twenties = dollars / 20;
	dollars -= (*twenties * 20);
	// Divides amount by 10 then subtracts by the amount of 10s
	*tens = dollars / 10;
	dollars -= (*tens * 10);
	// Divides amount by 5 then subtracts by the amount of 5s
	*fives = dollars / 5;
	dollars -= (*fives * 5);
	// Divides amount by 1 to compute the amoount of dollars left
	*ones = dollars / 1;
}
