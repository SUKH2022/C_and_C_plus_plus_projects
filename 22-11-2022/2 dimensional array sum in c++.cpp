#include<iostream>
using namespace std;
int main()
{
	int a[5],b[5],c[5],i;
	cout<<"Enter the 5 elements of the first array: ";
	for(i=0;i<5;i++)
	{
	    cin>>a[i];
    }
	cout<<"Enter the 5 elements of the second array: ";
	for(i=0;i<5;i++)
	{
		cin>>b[i];
	}
	cout<<"addition of two array is ";
	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];
		cout<<c[i]<<"\n";
	}
}
/*
Enter the 5 elements of the first array: 1
2
3
4
5
Enter the 5 elements of the second array:
6
7
8
9
10
addition of two array is 7
9
11
13
15

*/