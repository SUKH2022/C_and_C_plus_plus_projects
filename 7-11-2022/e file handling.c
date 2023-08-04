#include<stdio.h>
void main()
/*{
	FILE *fp;
	char c;
	fp=fopen("File_handle.c","r");
	while(1)
	{
		c=fgetc(fp);
		if(c==EOF) //The End of the File (EOF) indicates the end of input. 
		{
			break;
		}
		printf("%c",c);
	}
	fclose(fp);
}*/
//no output

/*
Writing File : fprintf() function

The fprintf() function is used to write set of characters 
into file. It sends formatted output to a stream.
*/
/*
{  
   FILE *fp;  
   fp = fopen("file.txt", "w");//opening file  
   fprintf(fp, "Hello my friend!..file by fprintf...\n");//writing data into file  
   fclose(fp);//closing file  
}*/
//output is in the file.txt


/*
Reading File : fscanf() function

The fscanf() function is used to read set of 
characters from file. It reads a word from the file 
and returns EOF at the end of file.
*/
/*
{  
   FILE *fp;  
   char buff[255];//creating char array to store data of file  
   fp = fopen("file.txt", "r");  
   while(fscanf(fp, "%s", buff)!=EOF){  
   printf("%s ", buff );  
   }  
   fclose(fp);  
}
*/
//file by fprintf...
