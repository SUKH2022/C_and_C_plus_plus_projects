#include<iostream>
#include<string.h>
using namespace std;
class demo{
	public:
		void printres(int i)
		{
			cout<<"It will take the integer value- "<<i<<endl;
		}
		void printres(double j)
		{
			cout<<"It will take the double value- "<<j<<endl;
		}
		void printres(string k)
		{
			cout<<"It will take the string value- "<<k<<endl;
		}
};
int main()
{
	demo d1;
	d1.printres(5);
	d1.printres(889.59);
	d1.printres("Welcome to learn the most interesting computer language i.e C++.");
}
/*
It will take the integer value- 5
It will take the double value- 889.59
It will take the string value- Welcome to learn the most interesting computer language i.e C++.

*/