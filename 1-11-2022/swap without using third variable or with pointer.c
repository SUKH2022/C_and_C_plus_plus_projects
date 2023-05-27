//Pointer Program to swap two numbers without using the 3rd variable.
#include<stdio.h>
void main()
{
	int a=10,b=20,*p1=&a,*p2=&b;
	printf("Before the swap: *p1=%d *p2=%d",*p1,*p2);
	*p1=*p1+*p2;
	*p2=*p1-*p2;
	*p1=*p1-*p2;
	printf("\nAfter the swap: *p1=%d *p2=%d",*p1,*p2);
}
/*
Before the swap: *p1=10 *p2=20
After the swap: *p1=20 *p2=10
*/