#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* replaceWord(const char * str,const  char * oldWord, const char * newWord)
{
	char * resultString;
	int i,cout=0;
	int newWordLength= strlen(newWord);
	int oldWordLength= str(oldWord);
	
	//Lets count the number of times old word occurs in the string
	for(i=0;str[i]!='\0';i++)
	{
		//this is a string=
		if(strstr(&str[i],oldWord)== &str[i])
		{
			count ++;
			
			//jump over this word
			i=i + oldWordLength-1;
		}
	}
	//Making a new string to fit in the replaced words
	resultString=(char *) malloc(i + count * (newWordLength - oldWordLength) + 1); //+1 in last is there as we have to accomodate the null character as well.
	
	i=0;
	while(*str)
	{
		//compare the sub string with result.
		if(strstr(str,oldWord)==str)
		{
			strcpy(&resultstring[i], newWord);
			i+=newWordLength;
			str+=oldWordLength;
		}
		else
		{
			resultString[i]= *str;
			i+=1;
			str+=1;
		}
	}
	resultString[i]='\0';
	return resultString;
		
}

int main()
{
	FILE * ptr= NULL;
	FILE * ptr2= NULL;
	ptr = fopen("bill.txt","r");
	ptr2 = fopen("genbill.txt","r");
	char str[200];
	fgets(str,200,ptr);
	printf("The given bill template was: %s\n\n",str);
	
	//call the replaceWord function and generate newStr
	char * newStr;
	newStr= replaceword(newStr,"{{item}}","Table Fan");
	newStr= replaceword(newStr,"{{outlet}}","ram laxmi fan outlet");
	newStr= replaceword(newStr,"{{name}}","Harry");
	
	char * newStr=str;
	printf("The actual bill genetrated:  is %s\n",newStr);
	printf("The generated bill has been written to the file genbill.txt\n")
	fprintf(ptr2,"%s",newStr); //error:-  txt is not there
	fclose(ptr);
	fclose(ptr2);	
	return 0;
}