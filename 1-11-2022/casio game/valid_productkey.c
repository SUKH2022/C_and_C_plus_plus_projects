#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fp;
    fp = fopen("product_key.bin", "r");
    char read_var[100] ,var_pkey[100] ;
    int t;
    
    
    while(fscanf(fp, "%s", read_var) !=  EOF)
    {
        //printf("%s", read_var);
        printf("\nEnter product key: ");
        scanf("%s",&var_pkey);

        t = strcmp(var_pkey,read_var);
        
        if( t==0)
        {
            printf("\nSuccess!\n");
            continue;
        }
        else
        {
            printf("\nInvalid product key!!");
            break;
        }

    }
    fclose(fp);
	return 0;
}