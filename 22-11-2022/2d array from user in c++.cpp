#include<iostream>
using namespace std;
main()
{
	int s[2][2];
	int i,j;
	cout<<"2D Array Input: \n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"\n s["<<i<<"]["<<j<<"]= ";
			cin>>s[i][j];
		}
	}
	cout<<"\n The 2D Array is: \n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"\t"<<s[i][j];
		}
		cout<<endl;
	}
}
/*
2D Array Input:

 s[0][0]= 1

 s[0][1]= 2

 s[1][0]= 3

 s[1][1]= 4

 The 2D Array is:
        1       2
        3       4

*/