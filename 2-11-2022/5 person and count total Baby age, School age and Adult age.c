#include<stdio.h>
void main()
{
	int a,cb=0,cs=0,ca=0,c=0;
	while(c<5)
	{
		printf("Enter the age of a person[%d]: ",c+1);
		scanf("%d",&a);
		
		if(a>=0 && a<=5)
		{
			cb++;
		}
		else if(a>=6 && a<=17)
		{
			cs++;
		}
		else
		{
			ca++;
		}
		c++;
	}
	printf("\nBaby age: %d",cb);
	printf("\nSchool age: %d",cs);
	printf("\nAdult age: %d",ca);	
}
/*
Enter the age of a person[1]: 15
Enter the age of a person[2]: 91
Enter the age of a person[3]: 3
Enter the age of a person[4]: 13
Enter the age of a person[5]: 7

Baby age: 1
School age: 3
Adult age: 1
*/