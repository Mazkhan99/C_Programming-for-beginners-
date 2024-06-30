#include<stdio.h>

int main()
{
    int a[3][3],sum=0;
    // first matrix
    printf("enter elements of the first matrix: ");
    for(int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    //printing matrix
    printf("first matrices is: \n");
    for(int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    
    for(int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf((i>=j)? "0\t" : "%d\t",a[i][j]);
        }
        printf("\n");
    }

    
}