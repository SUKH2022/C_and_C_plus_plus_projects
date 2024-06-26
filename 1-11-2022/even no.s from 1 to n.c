/* C program to print all even numbers from 1 to n*/
#include <stdio.h>

int main()
{
    int i, n;
  
    /* Input upper limit of even number from user */
    printf("Print all even numbers till: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are: \n", n);

    //Start loop counter from 1, increment it by 1, will iterate till n
    for(i=1; i<=n; i++)
    {
        //Check even condition before printing
        if(i%2 == 0)
        {
            printf("%d\n", i);
        }
    }
}
/*
Print all even numbers till: 20
Even numbers from 1 to 20 are:
2
4
6
8
10
12
14
16
18
20

*/