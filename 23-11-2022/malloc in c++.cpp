#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	//int *ptr=(datatypecast *)malloc(size of byte/memory*sizeodf//(datatype));
	int *ptr,i;
	ptr=(int *)malloc(5 *sizeof(int));
	cout<<"Enter values for array"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"Enter elements"<<i<<" ";
		cin>>ptr[i];
	}
	free(ptr);
}
/*
Enter values for array
Enter elements0 1
Enter elements1 2
Enter elements2 3
Enter elements3 4
Enter elements4 5

*/