#include<stdio.h>    
void main ()    
{    
    int i, j,temp;     
    int a[10] = { 100, 19, 27, 101, 203, 404, 102, 708, 340, 230};     
    for(i = 0; i<10; i++)    
    {    
        for(j = i+1; j<10; j++)    
        {    
            if(a[j] > a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }     
    printf("Printing Sorted Element List ...\n");    
    for(i = 0; i<10; i++)    
    {    
        printf("%d\n",a[i]);    
    }    
}     
/*
Printing Sorted Element List ...
708
404
340
230
203
102
101
100
27
19
*/