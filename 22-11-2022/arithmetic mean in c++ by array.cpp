#include<iostream>
using namespace std;
int main()
{
	int n,i,arr[50],s=0;
	cout<<"How many nos you want to enter? ";
	cin>>n;
	cout<<"Enter "<<n<<" Nos: \n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		s=s+arr[i];
	}
	int armean=s/n;
	cout<<"\nArithmetic Mean= "<<armean;
}
/*
How many nos you want to enter? 5
Enter 5 Nos:
1
2
3
4
5

Arithmetic Mean= 3
*/