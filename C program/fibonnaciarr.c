#include<stdio.h>

void fibonacciarr(int *fib, int n)
{
    fib[0] = 0;
    fib[1] = 1;
    for (int i=2; i<n; i++)
    {
        fib[i] = fib[i-1]+fib[i-2];
    }

    
}

void printarr(int *fib, int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%d\t",fib[i]);
    }
}

int main()
{
    int n;
    printf("enter number of terms: ");
    scanf("%d",&n);

    int fib[n];
    fibonacciarr(fib,n);
    printarr(fib,n);

    return 0;
}