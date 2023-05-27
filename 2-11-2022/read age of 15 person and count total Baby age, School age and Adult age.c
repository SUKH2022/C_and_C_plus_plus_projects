/*
C program to read age of 15 person and count total Baby age, School age and Adult age
*/
#include <stdio.h>
int main()
{
	int a;
	int cbaby=0,cschool=0,cadult=0;
	int c=0;
	
	while(c<15)
	{
		printf("Enter age of person [%d]: ",c+1);
		scanf("%d",&a);
		
		if(a>=0 && a<=5)
			cbaby++;
		else if(a>=6 && a<=17)
			cschool++;
		else
			cadult++;
		
		//increase counter
		c++;
	}
	printf("Baby age: %d\n",cbaby);
	printf("School age: %d\n",cschool);
	printf("Adult age: %d\n",cadult);
}
/*
Enter age of person [1]: 2
Enter age of person [2]: 6
Enter age of person [3]: 7
Enter age of person [4]: 12
Enter age of person [5]: 15
Enter age of person [6]: 94
Enter age of person [7]: 3
Enter age of person [8]: 4
Enter age of person [9]: 36
Enter age of person [10]: 24
Enter age of person [11]: 20
Enter age of person [12]: 97
Enter age of person [13]: 1
Enter age of person [14]: 9
Enter age of person [15]: 10
Baby age: 4
School age: 6
Adult age: 5
*/