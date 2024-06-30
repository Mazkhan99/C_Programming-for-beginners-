#include <stdio.h>

void sum(int x,int y);
int main()
{
    int i,j;
    printf("enter numbers: ");
    scanf("%d %d",&i,&j);
    sum(i,j);

}

void sum(int a, int b)
{
    printf("Sum is %d",a+b);
}