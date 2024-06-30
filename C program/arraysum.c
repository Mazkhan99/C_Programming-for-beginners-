#include <stdio.h>

int main()
{
    int *ptr, sum=0, i=0;
    int a[5] = {2,4,3,5,6};
    ptr = &a[0];
    while (i<5)
    {
        sum+=*ptr;
        i++;
        ptr++;
    }

    printf("Sum is: %d",sum);

    return 0;
}