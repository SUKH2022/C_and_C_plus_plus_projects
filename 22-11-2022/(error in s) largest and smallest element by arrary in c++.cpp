#include<iostream>
using namespace std;
int main()
{
    int l,arr[7],i;
    //cout<<"\nEnter the array size: ";
    
    cout<<"\nEnter array Elements: \n";
    for(i=0;i<=4;i++)
    {
    	cin>>arr[i];
	}
	cout<<"\n Searching for largest no.....\n\n";
	l=arr[0];
	for(i=0;i<=4;i++)
	{
		if(l<arr[i])
		{
			l=arr[i];
		}
	}
	cout<<"Largest no: "<<l;
	
	
	//smallest no in array.........
	int arr1[100],size,j,s;
    cout<<"\nEnter the array size: ";
    cin>>size;
    cout<<"\nEnter array Elements: \n";
    for(j=0;j<=size;j++)
    {
    	cin>>arr1[j];
	}
	cout<<"\n Searching for Smallest Element.....\n\n";
	s=arr1[0];
	for(j=0;j<size;j++)
	{
		if(s<arr1[j])
		{
			s=arr1[j];
		}
	}
	cout<<"Smallest Element is: "<<s;
}