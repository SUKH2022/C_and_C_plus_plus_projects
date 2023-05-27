#include<stdio.h>
void main()
{
	int a=40;
    int unsigned b=7;
	printf("\n%d",a); //40
    printf("\n%u",b); //7
    printf("\n%d",&a); //6684188
    printf("\n%u",&b); //6684176
    
    int c=12345;
    printf("\n%7d",c); //  12345
    
    float d=1234.5678;
    printf("\n%6.2f",d); //1234.57 //this function round the no. 
    int x=10;
	int y=-10;
	printf("\nvalue of b is %u",x);
	printf("\nvalue of c is %u",y);
	
	int z=0100;
	printf("\noctal value of z is %o",z);
	printf("\nInteger value of z is %d",z);
	
	/*
	y contains the hexadecimal value 'A'. We display the hexadecimal value of y in two formats. 
	We use %x and %X to print the hexadecimal value where %x displays the value in small letters, 
	i.e., 'a' and %X displays the value in a capital letter, i.e., 'A'.
	*/
	int q0xA;   // error
	printf("\n<<<<<<<Hexadecimal value of q is %x",y);
	printf("\n<<<<<<<Hexadecimal value of q is %X",y);
	printf("\n<<<<<<<Integer value of q is %d",y);
	
	float w=3.4;
	printf("\nFloating point value of w is %f",w);
	
	float e=3;  //what is exponential value ??
	printf("\nExponential value of e is %e",e);
	
	printf("\nExponential value of e is %E",e);
	
	//%g specifier displays the output same as the input with a same precision.
	printf("\nFloat value of w is %g",w);
	
	int r=5;
	printf("\nAddress value of r in hexadecimal form is %p",&r);
	
	char t='c';
	printf("\nValue of t is %c",t);
	
	printf("\n%s","Javatpoint");
	
	//%8d specifier displays the value after 8 spaces while %-8d specifier will make a value left-aligned.
	int u=900;
	printf("\n%8d",x);
	printf("\n%-8d",x);
	//%08d means that the empty space is filled with zeroes.
	int i=12;
	printf("\n%08d",i);
	
	float o=12.2;
	printf("\n%.2f",o);
	
	//Escape Sequence Example
	int number=50;  
    printf("\nYou\nare\nlearning\n\'c\' language\n\"Do you know C language\"");   
}
/*

40
7
6684140
6684136
  12345
1234.57
value of b is 10
value of c is 4294967286
octal value of z is 100
Integer value of z is 64
Hexadecimal value of q is fffffff6
Hexadecimal value of q is FFFFFFF6
Integer value of q is -10
Floating point value of w is 3.400000
Exponential value of e is 3.000000e+000
Exponential value of e is 3.000000E+000
Float value of w is 3.4
Address value of r in hexadecimal form is 000000000065FDE4
Value of t is c
Javatpoint
      10
10
00000012
12.20
You
are
learning
'c' language
"Do you know C language"
*/