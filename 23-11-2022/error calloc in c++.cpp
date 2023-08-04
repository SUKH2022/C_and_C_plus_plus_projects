#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	//write c++ code here:-
	//int *ptr=(datatypecast *)calloc(size of byte/memory,sizeodf//(datatype));
	int *ptr,i;
	ptr=(int *)calloc(5, sizeof(int));
	cout<<"Enter values for array"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"Enter elements"<<i<<" ";
		cin>>ptr[i];
	}
	free(ptr);
}