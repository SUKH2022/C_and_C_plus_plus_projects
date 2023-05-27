#include <stdio.h>
int main() 
{
  int n,i;
  printf("Enter a no. of which a table should be displayed: ");
  scanf("%d",&n);
  for (i=1;i<=10;++i) 
  {
    printf("%d*%d= %d \n",n,i,n*i);
  }
}
/*
Enter a no. of which a table should be displayed: 2
2*1= 2
2*2= 4
2*3= 6
2*4= 8
2*5= 10
2*6= 12
2*7= 14
2*8= 16
2*9= 18
2*10= 20
*/