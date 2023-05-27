#include <stdio.h>
int main() 
{
    int n,i;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factors of %d are: ", n);
    for(i=1;i<=n;++i) 
	{
        if (n%i==0) 
		{
            printf("\n%d",i);
        }
    }
}
/*
Enter a positive integer: 8
Factors of 8 are:
1
2
4
8
*/