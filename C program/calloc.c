#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n;
    printf("Enter no of elements: ");
    scanf("%d", &n);

    ptr = (int *) calloc (n, sizeof(int));

    printf("Enter elements: ");
    for (int i=0; i<n; i++)
    {
        scanf("%d",&*(ptr+i));
    }

    printf("Elements entered are \n");
    for (int i=0; i<n; i++)
    {
        printf("%d\n",*(ptr+i));
    }

    free(ptr);

    return 0;
}