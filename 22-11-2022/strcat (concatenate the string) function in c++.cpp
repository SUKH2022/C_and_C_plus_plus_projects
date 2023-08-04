#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s1[100],s2[100];
	cout<<"Enter your first string: ";
	gets(s1);
	cout<<"Enter your 2nd string: ";
	gets(s2);
	
	strcat(s1,s2);
	cout<<s1;
}
/*
Enter your first string: simar
Enter your 2nd string: mom
simarmom
*/