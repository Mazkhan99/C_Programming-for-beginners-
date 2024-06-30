#include <stdio.h>

int main()
{
    int n;

    do
    {
        printf("enter odd number: ");
        scanf("%d", &n);
        if (n % 2 != 0)
        {
            break;
        }
    } while (1);

    printf("Thank you");

    return 0;
}