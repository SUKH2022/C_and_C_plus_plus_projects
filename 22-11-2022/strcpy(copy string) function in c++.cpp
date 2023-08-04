#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s2[30]="123456";
	char s1[20];
	strcpy(s1,s2);
	cout<<s1;
	
	cout<<"\n";
	char s3[10]="abc234";
	char s4[10];
	strcpy(s4,s3);
	cout<<s4;
}
/*
123456
abc234
*/