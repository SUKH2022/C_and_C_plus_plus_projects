#include <stdio.h>
int main() 
{
    int n,i,f=1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if(n<0)
	{
        printf("Error! \nFactorial of a negative number doesn't exist.");
    }
	else 
	{
        for (i=1;i<=n;++i) 
		{
            f*=i;
        }
        printf("Factorial of %d = %llu",n,f);
    }
}
/*
Enter an integer: 5
Factorial of 5 = 120
*/