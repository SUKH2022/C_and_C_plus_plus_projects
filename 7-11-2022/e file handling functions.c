#include<stdio.h>
#include<conio.h>  
int main()
/*
Reading File : fgetc() function
The fgetc() function returns a single character from the file.
It gets a character from the stream. It returns EOF at the end of file.
*/
{
	FILE *fp;
	fp = fopen("file1.txt", "w");//opening file 
	fputc("a",fp); //only writing a single character into the file
	fclose(fp); //closing the file
}
//error


/*
Reading File : fgetc() function
The fgetc() function returns a single character from the file.
It gets a character from the stream. It returns EOF at the end of file.
/*
/*
{  
    FILE *fp;  
    char c;  
    clrscr();  //error
    fp=fopen("myfile.txt","r");  
  
    while((c=fgetc(fp))!=EOF)
	{  
	    printf("%c",c);  
    }  
    fclose(fp);  
    getch();  
} 
*/
//error


/*
Writing File : fputs() function
The fputs() function writes a line of characters into file. 
It outputs string to a stream.
*/
/*
{  
FILE *fp;  
clrscr();  
  
fp=fopen("myfile2.txt","w");  
fputs("hello c programming",fp);  
  
fclose(fp);  
getch();  
}  
*/
//error


/*
Reading File : fgets() function
The fgets() function reads a line of characters from 
file. It gets string from a stream.
*/
/*
{  
FILE *fp;  
char text[300];  
clrscr();  
  
fp=fopen("myfile2.txt","r");  
printf("%s",fgets(text,200,fp));  
  
fclose(fp);  
getch();  
}
*/
//error


/*
C fseek() function
The fseek() function is used to set the file pointer 
to the specified offset. It is used to write data into file at desired location.
*/
/*
{  
   FILE *fp;  
  
   fp = fopen("myfile.txt","w+");  
   fputs("This is javatpoint", fp);  
    
   fseek( fp, 7, SEEK_SET );  
   fputs("hello", fp);  
   fclose(fp);  
}*/
//This ishellotpoint


/*
C rewind() function
The rewind() function sets the file pointer 
at the beginning of the stream. It is useful if you have 
to use stream many times.
*/
/*
{  
FILE *fp;  
char c;  
clrscr();  
fp=fopen("file.txt","r");  
  
while((c=fgetc(fp))!=EOF){  
printf("%c",c);  
}  
  
rewind(fp);//moves the file pointer at beginning of the file  
  
while((c=fgetc(fp))!=EOF){  
printf("%c",c);  
}  
  
fclose(fp);    
getch();    
}
*/   
//error

/*
C ftell() function
The ftell() function returns the current file position of the specified 
stream. We can use ftell() function to get the total size of a file 
after moving file pointer at the end of file. We can use SEEK_END 
constant to move the file pointer at the end of file.
*/
/*
{  
   FILE *fp;  
   int length;  
   clrscr();  
   fp = fopen("file.txt", "r");  
   fseek(fp, 0, SEEK_END);  
  
   length = ftell(fp);  
  
   fclose(fp);  
   printf("Size of file: %d bytes", length);  
   getch();  
}*/
//error  