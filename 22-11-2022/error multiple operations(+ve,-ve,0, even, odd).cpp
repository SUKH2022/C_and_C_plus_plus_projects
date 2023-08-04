#include<iostream>
using namespace std;
int main()
{
	int i;
	int z[20];
	int p=0;
	int n=0;
	int o=0;
	int e=0;
	int zero=0;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter a no: \n";
		cin>>z[i];	
	}
	if(z[i]>0)
	{
		p++;
	}
	else if(z[i]<0)
	{
		n++;
	}
	else
	{
		zero++;
	}
	if(z[i]%2==0)
	{
		e++;
	}
	else
	{
		o++;
	}
	cout<<"Positive: "<<p<<"\nNegative: "<<n<<"\nZero: "<<zero<<"\nOdd: "<<o<<"\nEven: "<<e<<endl;
    return 0;
}