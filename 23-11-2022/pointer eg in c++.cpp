#include<iostream>
using namespace std;
int main()
{
	int n=60;
	int *ptr;
	ptr=&n;
	cout<<"The address of your variable is= "<<ptr;
	cout<<"\nThe value of your variable is= "<<*ptr;
}
/*
The address of your variable is= 0x7afe14
The value of your variable is= 60
*/