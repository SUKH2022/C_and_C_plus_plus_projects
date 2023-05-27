#include<stdio.h>
void main()
{
	char ch;
	printf("Enter the character: ");
	//ch=getche(); //enter is not used in getche.
	ch=getchar();
	printf("\nThe entered value is %c",ch); //enter is required to get the answer.
}
/*
output of getche:-
Enter the character: g
The entered value is g

output of getchar:-
Enter the character: g

The entered value is g
*/