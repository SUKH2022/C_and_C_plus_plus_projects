/*C program to print all upper case and lower case alphabets.*/
 
#include <stdio.h>
 
int main()
{
    char i;
    printf("Capital or upper case characters:\n");
    for(i='A'; i<='Z'; i++)
        printf("%c ",i);
 
    printf("\n\nLower case characters:\n");
    for(i='a'; i<='z'; i++)
        printf("%c ",i);
}
/*
Capital or upper case characters:
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z

Lower case characters:
a b c d e f g h i j k l m n o p q r s t u v w x y z
*/