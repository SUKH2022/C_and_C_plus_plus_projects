/*C program to print square, cube and square root of all numbers from 1 to N.*/ 
#include<stdio.h>
#include<math.h>

int main()
{
    int i,n;
 
    printf("Enter the value of N: ");
    scanf("%d",&n);
 
    printf("No.     Square   Cube    Square Root\n",n);
    for(i=1;i<=n;i++)
    {
        printf("%d \t %ld \t %ld \t %.2f\n",i,(i*i),(i*i*i),sqrt((double)i));
    }
}
/*
Enter the value of N: 10
No.     Square   Cube    Square Root
1        1       1       1.00
2        4       8       1.41
3        9       27      1.73
4        16      64      2.00
5        25      125     2.24
6        36      216     2.45
7        49      343     2.65
8        64      512     2.83
9        81      729     3.00
10       100     1000    3.16
Enter the value of N: 10
No.     Square   Cube    Square Root
1        1       1       1.00
2        4       8       1.41
3        9       27      1.73
4        16      64      2.00
5        25      125     2.24
6        36      216     2.45
7        49      343     2.65
8        64      512     2.83
9        81      729     3.00
10       100     1000    3.16

*/
