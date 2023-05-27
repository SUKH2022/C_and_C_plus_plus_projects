#include<stdio.h>
void main()
{
	int low,up,i,a,f=0;
	printf("Enter the lower interval: ");
	scanf("%d",&low);
	printf("Enter the upper interval: ");
	scanf("%d",&up);
	for(i=low;i<=up;i++)
	{
		for(a=2;a<i;a++)
		{
			if(i%a==0)
			{
				f=1;
				break;
			//printf("\n%d",i);
			}
			f=0;
		}
		
		if (f==0)
		{
			printf("\n%d",i);
		}
	}
	
}
