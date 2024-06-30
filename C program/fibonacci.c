#include <stdio.h>

void fibonacci(int n);

int main()
{
    int n;
    printf("enter highest limit: ");
    scanf("%d",&n);
    fibonacci(n);
}

void fibonacci(int n)
{
    int a = 0, b = 1, sum = 0;
    while (a<=n)
    {
        printf("%d\n",a);
        sum = a + b;
        a = b;
        b = sum;
    }
}