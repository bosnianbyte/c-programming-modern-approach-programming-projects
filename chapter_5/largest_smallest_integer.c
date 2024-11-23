//	A program that finds the largest and smallest of four integers entered by a user
	
#include <stdio.h>

int main(void)
{	
	int int1, int2, int3, int4, largest, smallest, max1, min1, max2, min2;

	// Asks user for four integers
	printf("Enter four integers: ");
	scanf("%d %d %d %d", &int1, &int2, &int3, &int4);

	// Finds out which integer is the largest and smallest in only 4 if statements
	if (int1 > int2) {
		max1 = int1; min1 = int2; }
	else {
		max1 = int2; min1 = int1; }
	if (int3 > int4) {
		max2 = int3; min2 = int4; }
	else {
		max2 = int4; min2 = int3; }
	if (max1 > max2) {
		largest = max1; }
	else {
		largest = max2; }
	if (min1 < min2) {
		smallest = min1; }
	else {
		smallest = min2; }
	
	// Prints the largest and smallest integer
	printf("Largest: %d\n", largest);
	printf("Smallest: %d\n", smallest);
	return 0;
}
