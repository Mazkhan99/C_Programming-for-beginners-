#include<stdio.h>

int main()
{
    int a[10];
    printf("Enter elements to array: ");
    for (int i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("values entered i n array are: ");
    for (int i=0; i<10; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}