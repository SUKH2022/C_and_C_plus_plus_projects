#include<stdio.h>  

int main()    
{    
    int n,r,s=0,temp;    
    printf("Enter the number= ");    
    scanf("%d",&n);    
    temp=n;    
    while(n>0)    
    {     
        r=n%10;    
        s=(s*10)+r;    
        n=n/10;    
    }    
    if(temp==s)    
        {
		    printf("palindrome number ");    
        }
    else
	{
	    printf("not palindrome");   
    }
}
/*
Enter the number= 121
palindrome number
Enter the number= 42
not palindrome
*/