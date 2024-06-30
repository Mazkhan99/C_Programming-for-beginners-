#include <stdio.h>

int main()
{
    int a[3][3], b[3][3],sum[3][3];

    // first matrix
    printf("enter elements of the first matrix: ");
    for(int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    // second matrix
    printf("enter elements of the second matrix: ");
    for(int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    // sum of two matrices
    for(int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            sum[i][j] = a[i][j]+b[i][j];
        }
    }

    //printing matrix1
    printf("first matrices is: \n");
    for(int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    //printnig matrix2
    printf("Second matrices is: \n");
    for(int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    // printing sum of two matrices
    printf("sum of two matrices is: \n");
    for(int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}