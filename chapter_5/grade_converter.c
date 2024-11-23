// A program that converts numerical grades into letter grades
	
#include <stdio.h>

int main(void)
{	
	float numerical_grade;
	int tens_place;

	// Asks user for numerical grade
	printf("Enter numerical grade: ");
	scanf("%f", &numerical_grade);

	// Prints an error message if the grade is above 100 or less than 0
	if (numerical_grade > 100 || numerical_grade < 0)
	{
		printf("Error: the grade is larger than 100 or less than 0\n");
		return 1;
	}

	// Computes the ten_place digit
	tens_place = numerical_grade / 10.0f;

	// Switch statement to print the letter grade based on the tens place digit
	switch (tens_place) {
		case 10: case 9:
			printf("Letter grade: A\n");
			break;
		case 8:
			printf("Letter grade: B\n");
			break;
		case 7:
			printf("Letter grade: C\n");
			break;
		case 6:
			printf("Letter grade: D\n");
			break;
		case 5: case 4: case 3: case 2: case 1: case 0:
			printf("Letter grade: F\n");
			break;
	}
	return 0;
}
