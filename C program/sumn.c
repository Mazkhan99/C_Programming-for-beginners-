#include <stdio.h>

int main()
{
    int i = 0, sum = 0, n;
    printf("enter number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum += i;
        i++;
    }

    for (int i = n; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    printf("sum is: %d\n", sum);

    return 0;
}