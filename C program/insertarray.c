#include <stdio.h>

int main()
{
    int n;
    printf("enter number of elemnts: ");
    scanf("%d",&n);

    int A[n];
    printf("enter elements into the array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }

    int number;
    printf("enter a number to insert into the array: ");
    scanf("%d",&number);

    int index;
    printf("enter the index where the new element is to be placed: ");
    scanf("%d",&index);

    for(int i=n; i>index; i--)
    {
        A[i] = A[i-1];
    }

    A[index] = number;

    printf("array after insertion: ");
    for(int i=0; i<=n; i++)
    {
        printf("%d ",A[i]);
    }

    return 0;
}