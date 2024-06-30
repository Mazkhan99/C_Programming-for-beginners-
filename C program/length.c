#include <stdio.h>

int main()
{
    int n,i=0;
    printf("enter a number: ");
    scanf("%i",&n);

    int m = n;

    while (n != 0)
    {
        n = n/10;
        i++;
    }
    printf("%i is a %i digit number",m,i);
}