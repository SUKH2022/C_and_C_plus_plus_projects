#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j,arr[10][10];
	cout<<"Enter the row and column size for array: ";
	cin>>r>>c;
	cout<<"Enter "<<r*c<<" Array Elements: ";
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"\nThe array is: \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\nArray Elements with its index: \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"arr["<<i<<"]["<<j<<"]= "<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}
/*
Enter the row and column size for array:  2 2
Enter 4 Array Elements: 1
2
3
4

The array is:
1 2
3 4

Array Elements with its index:
arr[0][0]= 1 arr[0][1]= 2
arr[1][0]= 3 arr[1][1]= 4

*/