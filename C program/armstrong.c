#include <stdio.h>

int main()
{
    int armstrong = 0, rem, new, num;
    printf("enter a three digit number: ");
    scanf("%d", &num);
    new = num;

    while (new != 0)
    {
        rem = new % 10;
        armstrong += rem * rem * rem;
        new /= 10;
    }

    if (num == armstrong)
    {
        printf("%d is an armstrong number", num);
    }
    else
    {
        printf("%d is not an armstrong number", num);
    }

    return 0;
}