#include<stdio.h>
void main()
{
	char a;
	printf("Enter the an alphabet: "); 
	scanf("%c",&a);
	
	if(a>='a' && a<='z')
	{
	    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
	    {
		    printf("it is a vowel.");
	    }
        else
	    {
		    printf("it is a consonant.");
	    }
   }
   else
   {
   	printf("It is not an alphabet.\n Try again...");
   }
}
/*
Enter the an alphabet: h
it is a consonant.

Enter the an alphabet: e
it is a vowel.

Enter the an alphabet: 5
It is not an alphabet.
 Try again...
*/