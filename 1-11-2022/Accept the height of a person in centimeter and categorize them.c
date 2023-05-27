//Accept the height of a person in centimeter and categorize them
#include <stdio.h>
void main() {
	float h;

	printf("Input the height of the person(in cms): ");
	scanf("%f",&h);

	if (h<150.0) {
		printf("The person is a Dwarf.\n");
	} else if((h>=150.0) && (h<165.0)) {
		printf("The person has an average heighted. \n");
	}

	else if((h>=165.0) && (h<= 195.0)) {
		printf("The person is taller. \n");
	} else {
		printf("Abnormal height.\n");
	}
}
/*
Input the height of the person(in cms): 167
The person is taller.
*/