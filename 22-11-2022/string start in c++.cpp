#include<iostream>
using namespace std;
int main()
{
	//char s1[10]={'h','e','l',o','\0'};
	//char s1[20]="hello";
	char s1[5];
	cout<<"Enter your name: ";
	//cin>>s1;
	gets(s1);
	puts(s1);
	strrev(s1);
	cout<<s1;
}
/*
Enter your name: sukhpreet saini
sukhpreet saini
inias teerphkus
*/