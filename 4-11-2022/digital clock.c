#include<stdio.h>
#include<windows.h>
int main()
{
	int h,m,s;
	int d=1000; //we add a delay of 1000 milliseconds and we will use it in the function sleep.
	printf("\nSet Time: ");
	scanf("%d%d%d",&h,&m,&s);
	
	if(h>12 || m>60 || s>60)
	{
		printf("Error! Write time in correct formate to initiate time. \n");
		exit(0);
	}
	while(1)
	{
		s++;
		if(s>59)
		{
			m++;
			s=0;
		}
		if(m>59)
		{
			h++;
			m=0;
		}
		if(h>12)
		{
			h=1;
		}
		printf("\n Clock: ");
		printf("\n %02d:%02d:%02d",h,m,s); //This writes our time in this formate 00:00:00
		Sleep(d); //The function sleep slows down the while loop and make it more like a real clock.
		system("cls"); //This clear the screen.
		
	}
}
//start and get the output it is a stop watch.