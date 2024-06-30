#include<stdio.h>

int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    printf("%d",x%2 == 0);
}