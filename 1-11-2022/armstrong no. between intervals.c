#include <stdio.h>
int main() {
  int l,h,n,o,r,c=0;
  double res=0.0;
  printf("Enter two numbers(intervals): ");
  scanf("%d %d",&l,&h);
  printf("Armstrong numbers between %d and %d are: ",l,h);

  // swap numbers if high < low
  if(h<l) 
  {
    h+=l;
    l=h-l;
    h-=l;
  }
   
  // iterate number from (low + 1) to (high - 1)
  // In each iteration, check if number is Armstrong
  for(n=l+1;n<h;++n) 
  {
    o=n;

    // number of digits calculation
    while(o!=0) 
	{
      o/=10;
      ++c;
    }

    o=n;

    // result contains sum of nth power of individual digits
    while(o!=0) 
	{
      r= o%10;
      res+=pow(r,c);
      o/=10;
    }

    // check if number is equal to the sum of nth power of individual digits
    if((int)res==n) 
	{
      printf("%d ",n);
    }

    // resetting the values
    c= 0;
    res= 0;
  }
}
/*
Enter two numbers(intervals): 100
1000
Armstrong numbers between 100 and 1000 are: 153 370 371 407
*/