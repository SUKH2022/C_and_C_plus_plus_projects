#include<iostream>
using namespace std;
int main()
{
	int x;
	x=(3/2)+2;
	cout<<"value of x is "<<x<<"\n";
	
	int a,b;
	cout<<"Enter the variables a and b: ";
	cin>>a>>b;
	cout<<"\n values of "<<a<<"+"<<b<<"= "<<a+b;
	
	int y=3,z;
	z=y+int(10.0);
	cout<<"\nvalue of z is "<<z;
	
	float d=8.9,e=5.6;
	std::cout<<"\nvalue after adding two float no.s is "<<d+e;
	
	float f=6.7,g;
	g=f+float(10);
	std::cout<<"\nValue of g is "<<g<<std::endl;
	
}
/*
value of x is 3
Enter the variables a and b: 4
5

 values of 4+5= 9
 value of z is 13
 value after adding two float no.s is 14.5
 Value of g is 16.7
 
*/