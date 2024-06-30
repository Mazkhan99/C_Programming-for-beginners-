#include <stdio.h>

int main()
{
    int num, rem, rev=0, n;
    printf("enter a number to reverse: ");
    scanf("%d",&n);

    num = n;

    while (n > 0)
    {
        rem = n % 10;
        rev = rev*10+rem;
        n /= 10;        
    }

    printf("reverse of %d is %d",num,rev);
}
