#include<stdio.h>
void main()
{ 
	FILE *fptr;
	int id;
	char name[30];
	float salary;
	fptr=fopen("emp.txt","w+"); //open for writting
	if(fptr==NULL)
	{
		printf("File does not exit.\n");
	}
	printf("Enter the id \n");
	scanf("%d",&id);
	fprintf(fptr,"id= %d\n",id);
	printf("Enter the name \n");  
    scanf("%s", name);  
    fprintf(fptr, "Name= %s\n", name);  
    printf("Enter the salary\n");  
    scanf("%f", &salary);  
    fprintf(fptr, "Salary= %.2f\n", salary);  
    fclose(fptr); 
}
/*
Enter the id
1002
Enter the name
simar
Enter the salary
12000000

output in emp.txt:-
id= 1002
Name= simar
Salary= 12000000.00
*/