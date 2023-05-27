#include<stdio.h>
struct student
{
	int rollno;
	char name[10];
	char address[20];
}stu1={101,"ritu","delhi"},stu2={102,"nikks"};
main()
{
	struct student stu3;
	printf("\nRollno is %d",stu1.rollno);
	printf("\nName is %s",stu1.name);
	printf("\nAddress is %s",stu1.address);
	printf("\nRollno of second student is %d",stu2.rollno);
	printf("\nName of second student is %d",stu2.name);
	
	printf("\nEnter ur rollno: ");
	scanf("%d",&stu3.rollno);
	printf("\nYour rollno is %d",stu3.rollno);
	printf("\nEnter ur Name: ");
	scanf("%s",&stu3.name);
	printf("\nYour Name is %d",stu3.name);
}
//error is no output.
