#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s1="hello";
	string s2="hi!..";
	s1.replace(2,3,"A");
	//s1.erase(),s2.erase();
	cout<<s2<<"\n";
	
	cout<<s1;
	string s3="Networking";
	s3.erase();
}
/*
hi!..
heA

*/
