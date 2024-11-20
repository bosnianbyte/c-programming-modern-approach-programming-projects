/* 	Asks the user to enter a dollar amount then shows how to pay
	using the smallest numbers of $20, $10, $5, and $1 bills */
#include <stdio.h>

int main(void)
{	
	int amount, twenties, tens, fives, ones;
	// Prompts user to enter dollar amount
	printf("Enter a dollar amount: ");
	scanf("%d", &amount);
	// Divides amount by 20 then subtracts by the amount of 20s
	twenties = amount / 20;
	amount -= (twenties * 20);
	// Divides amount by 10 then subtracts by the amount of 10s
	tens = amount / 10;
	amount -= (tens * 10);
	// Divides amount by 5 then subtracts by the amount of 5s
	fives = amount / 5;
	amount -= (fives * 5);
	// Divides amount by 1 to compute the amoount of dollars left
	ones = amount / 1;

	// prints the amount of each bill in the amount
	printf("$20 bills: %d\n", twenties);
	printf("$10 bills: %d\n", tens);
	printf("$5 bills: %d\n", fives);
	printf("$1 bills: %d", ones);
	return 0;
}
