#include <stdio.h>
int main() 
{
    int a,n,i,sum=0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(i=1;i<=n;++i) 
	{
        sum+=i;
    }
    printf("Sum= %d",sum);
}
/*
Enter a positive integer: 20
Sum= 210
*/