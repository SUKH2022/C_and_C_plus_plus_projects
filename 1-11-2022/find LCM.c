#include <stdio.h>

int main() 
{

    int n1,n2,max;

    printf("Enter two positive integers: ");
    scanf("%d %d",&n1,&n2);

    // maximum number between n1 and n2 is stored in max
    max = (n1>n2?n1:n2);

    while (1) 
	{
        if((max%n1==0) && (max%n2==0)) 
		{
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
}
/*
Enter two positive integers: 4
8
The LCM of 4 and 8 is 8.
*/