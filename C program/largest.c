#include <stdio.h>

int main()
{
    int a[10];
    printf("enter number: ");
    for (int i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("entered numbers are: ");
    for (int i=0; i<10; i++)
    {
        printf("%d ",a[i]);
    }
    printf("largestr element is: %d")
}