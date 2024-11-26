// A program that indicates which date entered is earlier
	
#include <stdio.h>

int main(void)
{	
	int month, day, year, mm, dd, yy;

	printf("Enter 0/0/0 to exit.\n");
	// Asks user to enter a date
	printf("Enter a date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month, &day, &year);
	mm = 1; dd = 1; yy = 1;
	
	// While loop to check which date is the earliest
	while (mm != 0 && dd != 0 && yy != 0) {
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d", &mm, &dd, &yy);
		if (yy < year && yy != 0) {
			month = mm; day = dd; year = yy;
		} else if (mm < month && yy <= year && yy != 0) {
			month = mm; day = dd; year = yy;
		} else if (dd < day && mm <= month && yy <= year && yy != 0) {
			month = mm; day = dd; year = yy;
		}
	}
	// Prints the earliest date
	printf("%d/%d/%.2d is the earliest date", month, day, year);

	return 0;
}
