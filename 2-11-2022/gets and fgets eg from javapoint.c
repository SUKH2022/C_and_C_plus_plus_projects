#include<stdio.h>
void main()
{
	char s[20];
	printf("Enter the string: ");
	//gets(s); //gets is used as scanf in string
	//printf("You entered %s",s);
	
	//eg of fgets=makes sure that not more than the maximum limit of characters are read.
    fgets(s,20,stdin); //stdin- stardard input.   
    printf("%s",s); 
	/*Enter the string: javapoint is the best.
    javapoint is the be*/
}
/*
Enter the string: mom
You entered mom

Enter the string: javapoint is the best.
You entered javapoint is the best.
*/