#include <stdio.h>

void reversearray(int *arr,int n)
{
    for (int i=0; i<n/2; i++)
    {
        int first = arr[i];
        int last = arr[n-1-i];
        arr[n-1-i] = first;
        arr[i] = last;
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n = 5;
    reversearray(arr,n);
    for(int i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}