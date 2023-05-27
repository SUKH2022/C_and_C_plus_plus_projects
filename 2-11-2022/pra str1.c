#include<stdio.h>
void main()
{
	char s[10]={'s','i','m','a','r','s','t','r','i','n','g'},i;
	printf("%s\n",&s); //simarstrin
	for(i=0;i<=10;i++)
	puts(s);
	/*
	simarstrin
    simarstrin
    simarstrin?
    simarstrin?
    simarstrin?
    simarstrin?
    simarstrin?
    simarstrin?
    simarstrin
    simarstrin
    simarstrin
    simarstrin
	*/
	//printf("\n%s",&s[i]);
	/*
	simarstrin

    simarstrin
    imarstrin?
    marstrin?
    arstrin?
    rstrin?
    strin?
    trin?
    rin
    in
    n
	*/
	char str[20];
	printf("Enter the string: ");
	//scanf("%s",&str);
	gets(str); //for multiwords
	printf("Your entered string is %s",str);
	/*
	Enter the string: mom
    Your entered string is mom
	*/
	int a=20;
	printf("\n%2d",a,a,a);
	printf("\n%3d",a);
	printf("\n%4d",a);
	printf("\n%5d",a);
	printf("\n%6d",a);
	
}
/*
simarstrin?
simarstrin?
simarstrin?
simarstrin?
simarstrin?
simarstrin?
simarstrin?
simarstrin?
simarstrin?
simarstrin?
simarstrin?
simarstrin?
Enter the string: mom
Your entered string is mom
20
 20
  20
   20
    20
*/