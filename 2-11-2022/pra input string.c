#include<stdio.h>
void main()
{
	char a,str[10]={'h','e','l'},i,str1;
	for(i=0;i<10;i++)
	{
		printf("\n%c",str[i]);
	}
	
	printf("Enter the string to be displayed: ");
	scanf("%s",a);
	printf("The entered string is: %c",a);
	
	printf("%s",str);
	for(i=0;i<=10;i++)
	printf("%c",str[i]);
	puts(str1);
}
/*
error
*/
