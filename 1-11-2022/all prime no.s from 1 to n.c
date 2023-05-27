#include<stdio.h>
void main()
{
   int i,num,n,c;
   printf("Enter the range: ");
   scanf("%d", &n);
   printf("The prime numbers in between the range 1 to %d: ",n);
   for(num=1;num<=n;num++)
   {
      c=0;
      for(i=2;i<=num/2;i++)
	  {
         if(num%i==0)
		 {
            c++;
         break;
      }
   }
   if(c==0 && num!= 1)
   {
      printf("%d ",num);
   }
   }
}
/*
Enter the range: 20
The prime numbers in between the range 1 to 20: 2 3 5 7 11 13 17 19
*/