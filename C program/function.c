#include <stdio.h>

void sum();

int main()
{
    sum();
    return 0;
}

void sum()
{
    int a,b;
    printf("enter numbers: ");
    scanf("%d %d",&a,&b);
    printf("sum is %d",a+b);
}
