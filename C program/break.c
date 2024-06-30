#include <stdio.h>

int main()
{
    int n;
    printf("enter number: ");
    scanf("%d", &n);

    for (int i = 1; ; i++)
    {
        printf("%d\n", n * i);
        if (i == 10){
            break;
        }
    }

    printf("end\n");

    return 0;
}