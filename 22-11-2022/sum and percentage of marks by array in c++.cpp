#include<iostream>
using namespace std;
int main()
{
	int m[5],i;
	float s=0;
	cout<<"Enter the marks of students:- ";
	cout<<"\nComputer Science: ";
	cin>>m[0];
	cout<<"\nEnglish: ";
	cin>>m[1];
	cout<<"\nMaths: ";
	cin>>m[2];
	cout<<"\nPhysics: ";
	cin>>m[3];
	cout<<"\nChemistry: ";
	cin>>m[4];
	
	for(i=0;i<5;i++)
	{
		s=s+m[i];
	}
	float avg=s/5;
	float per;
	per=(s/500)*100;
	cout<<"\nAverage Marks: "<<avg;
	cout<<"\nPercentage: "<<per<<"%";
}
/*
Enter the marks of students:-
Computer Science: 98

English: 87

Maths: 99

Physics: 96

Chemistry: 94

Average Marks: 94.8
Percentage: 94.8%
*/