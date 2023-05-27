/*  C program to check whether number is 
    POSITIVE, NEGATIVE or ZERO until user doesn’t want to exit.*/

#include <stdio.h>

int main()
{
    int n;
    char c;
    do {
        printf("Enter an integer number :");
        scanf("%d", &n);

        if (n==0)
            printf("Number is Zero.");
        else if (n>0)
            printf("Number is Positive.");
        else if(n<0)
            printf("Number is Negative.");
        else
            printf("Incorrect, \nTry again with num keys.");

        printf("\n\nWant to check again (press Y/y for 'yes') :");
        fflush(stdin); /*to clear input buffer*/
        scanf(" %c", &c); /*Here is a space before %c*/
    } 
	while (c== 'Y' || c== 'y');

    printf("\nBye Bye!!!");
}
/*error*/
