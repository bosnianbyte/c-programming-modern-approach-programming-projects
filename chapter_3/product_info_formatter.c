// 	A program that formats product information entered by the user
#include <stdio.h>

int main(void)
{	
	int item_number, month, day, year;
	float unit_price;

	// Asks user for item number
	printf("Enter item number: ");
	scanf("%d", &item_number);

	// Asks user for unit price
	printf("Enter unit price: ");
	scanf("%f", &unit_price);

	// Asks user for purchase date
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	// Formats product info using tabs
	printf("Item\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");
	printf("%-d\t\t$%4.2f\t\t%.2d/%.2d/%4d\n", item_number, unit_price, month, day, year);
	return 0;
}
