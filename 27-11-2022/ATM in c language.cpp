#include<stdio.h>
int main()
{
	float a,b;
	char ch;
	printf("Enter initial amount:- ");
	scanf("%f",&a);
	printf("c- Credit\nd= Debit\nb- Balance.\n");
	printf("Enter c, d, and b \nif u want to check above mention in your account");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'c':
			printf("Enter the credit amount: ");
			scanf("%f",b);
			a=a+b;
			printf("New amount: %f",a);
			break;
		case 'd':
			printf("Enter the debit amount: ");
			scanf("%f",&b);
			if(a>=b)
			{
			    a=a-b;
			    printf("New Amount: %f",a);
		    }
		    else
		    {
		    	printf("Insufficient amount \n Kindly check your initial amount first.");
			}
			break;
		case 'b':
			printf("Amount in the account: %f",a);
			break;
		default:
			printf("Choose correct option..... ");
	}
}
