#include<iostream>
using namespace std;
int main()
{
	int m1[5][5],m2[5][5],m3[5][5];
	int i,j,r,c;
	
	cout<<"Enter the no.s of rows of the matrics to be added: ";
	cin>>r;
	cout<<"Enter the no.s of columns of the matrics to be added: ";
	cin>>c;
	
	cout<<"\n1st matrics input: \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"\nMatrix1["<<i<<"]["<<j<<"]= ";
			cin>>m1[i][j];
		}
	}
	
	cout<<"\n2nd matrics input: \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"\nMatrix2["<<i<<"]["<<j<<"]= ";
			cin>>m2[i][j];
		}
	}
	cout<<"\nAdding Matrics......\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			m3[i][j]=m1[i][j]+m2[i][j];
		}
	}
	
	cout<<"\nThe result Matrix is: \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
	    {
		    cout<<"\t"<<m3[i][j];
	    }
	    cout<<endl;
	}
}
/*
Enter the no.s of rows of the matrics to be added: 2
Enter the no.s of columns of the matrics to be added: 2

1st matrics input:

Matrix1[0][0]= 1

Matrix1[0][1]= 2

Matrix1[1][0]= 3

Matrix1[1][1]= 4

2nd matrics input:

Matrix2[0][0]= 5

Matrix2[0][1]= 6

Matrix2[1][0]= 7

Matrix2[1][1]= 8

Adding Matrics......

The result Matrix is:
        6       8
        10      12

*/