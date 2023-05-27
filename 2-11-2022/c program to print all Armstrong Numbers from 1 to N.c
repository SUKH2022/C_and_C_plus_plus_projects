/*C program to print all Armstrong Numbers from 1 to N. */

#include <stdio.h>

/*function to check Armstrong Number */
int checkArmstrong(int n)
{
    int t, r, s;
    t= n;

    s= 0;
    while (t!= 0) 
	{
        r= t% 10;
        s= s+ (r*r*r);
        t/= 10;
    }
    /* checking number is Armstrong or not */
    if (s== n)
        return 1;
    else
        return 0;
}

int main()
{
    int i, n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("All Armstrong numbers from 1 to %d:\n", n);
    for (i = 1; i <= n; i++) {
        if (checkArmstrong(i))
            printf("%d,", i);
    }
}
/*Enter the value of N: 1000
All Armstrong numbers from 1 to 1000:
1,153,370,371,407,*/
