//Program to Find Roots of a Quadratic Equation
#include <stdio.h>
int main() 
{
	//d =discriminant, r1=root1, r2=root2, r=real part, i=imaginary part
    double a,b,c,d,r1,r2,r,i;
    printf("<<<Roots of a Quadratic Equation>>>\n");
    printf("\nEnter coefficients a,b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    d=b*b-4*a*c;

    // condition for real and different roots
    if (d>0) 
	{
		printf("\nreal and different roots....");
        r1= (-b+sqrt(d))/(2*a);
        r2= (-b-sqrt(d))/(2*a);
        printf("\nroot1 = %.2lf and root2 = %.2lf",r1,r2); 
		/*2lf is used of long double it is a format specifier used in C language. 
		.2 is used for controlling the width of the decimal places.*/
	}

    // condition for real and equal roots
    else if (d==0) 
	{
	    printf("\nreal and equal roots....");
        r1=r2=-b/(2*a);
        printf("\nr1=r2=%.2lf; ", r1);
    }
    
    // if roots are not real
    else 
	{
		printf("\nroots are not real....");
        r=-b/(2*a);
        i=sqrt(-d)/(2*a);
        printf("\nr1=%.2lf + %.2lfi and r2=%.2f-%.2fi",r,i,r,i);
    }
}
/*
<<<Roots of a Quadratic Equation>>>

Enter coefficients a,b and c: 4
8
6

roots are not real....
r1=-1.00 + 0.71i and r2=-1.00-0.71i
*/