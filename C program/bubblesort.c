#include <stdio.h>

void bubblesort(int *A,int n)
{
    int key, temp;
    printf("bubble sort\n");
    for (int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if (A[j]>A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            } 
        }
    }
}

void printarr(int *A, int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}

int main()
{
    int A[]={78,98,23,67,9,56,4};
    int n = sizeof(A)/sizeof(int);

    printarr(A,n);
    bubblesort(A,n);
    printarr(A,n);

    return 0;
}