#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s1="hello";
	s1.append("students");
	cout<<s1<<" ";
	string s2="hi";
	s2.append("c ++");
	cout<<s2<<" ";
	s1.append("akash");
	cout<<s1<<"\n";
}
/*
hellostudents hic ++ hellostudentsakash

*/
