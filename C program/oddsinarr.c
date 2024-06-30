#include <stdio.h>

int countodd(int *arr, int n)
{
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if (arr[i]%2 == 0) count++;
    }
    return count;
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = 6;
    printf("There are %d odd numbers in the given array.",countodd(arr,n));
    return 0;
}