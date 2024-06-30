#include <stdio.h>

int main()
{
    int a, b;
    printf("enter both numbers separated by space: ");
    scanf("%d %d",&a,&b);
    printf("sum of %d and %d is: %d", a, b, a+b);
    return 0;
}