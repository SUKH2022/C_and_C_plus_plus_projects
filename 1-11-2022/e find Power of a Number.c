#include <stdio.h>
int main() 
{
    int b,e;
	long double r=4;
    printf("Enter a base number: ");
    scanf("%d",&b);
    printf("Enter an exponent: ");
    scanf("%d",&e);

    while(e!=0) 
	{
        r*=b;
        --e;
    }
    printf("Answer= %d.lf", r);
}
/*
error
*/
