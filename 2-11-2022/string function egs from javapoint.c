#include<stdio.h>
#include<string.h>
int main()
{
	char c[20]={'j','a','v','a','t','p','o','i','n','t','\0'};
	printf("Lenght of the string is %d",strlen(c));
	char c2[20];
	strcpy(c2,c); //first c2 the c.
	printf("\nValue of the second string is %s",c2);
	char a[10]={'h','e','l','l','o','\0'};
	char a2[10]={'c','\0'};
	strcat(a,a2);
	printf("\nValue of the first string is %s",a);
	char b[20],b2[20];
	printf("\nEnter the 1st string: ");
	gets(b);
	printf("\nEnter the 2nd string: ");
	gets(b2);
	if(strcmp(b,b2)==0)
	{
	printf("\nString are equal.");
	}
	else
	{
	printf("\nString are not equal.");
	}
	
	printf("\nString is: %s",b);    
    printf("\nReverse String is: %s",strrev(b));    
    
    printf("\nString is %s",b2);
    printf("\n Lower String is %s",strlwr(b2));
    printf("\nString is: %s",b2);    
    printf("\nUpper String is: %s",strupr(b2)); 
    
    char str[100]="This is javatpoint with c and java";
    char *sub;
    sub=strstr(str,"java");
    printf("\nSubstring is: %s",sub);
}
/*
Lenght of the string is 10
Value of the second string is javatpoint
Value of the first string is helloc
Enter the 1st string: hello

Enter the 2nd string: hello
String are equal.
String are equal.String is: hello
Reverse String is: olleh
String is Hello
 Lower String is hello
 String is: hello
Upper String is: HELLO
Substring is: javatpoint with c and java
*/