#include<stdio.h>  
void main( )  
{  
    FILE *fp ;  
    char ch ;  
    fp = fopen("first.txt","w") ;  
    fprintf(fp,"Writing this using fprintf\n");
    fclose (fp ) ;  
}  