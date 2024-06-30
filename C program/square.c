#include <stdio.h>

int main()
{
    int side;
    printf("enter length of side of square: ");
    scanf("%d",&side);

    for (int i = 0; i < side; i++){
        for (int i = 0; i < side; i++){
            printf("* ");
        }
        printf("\n");
    }
}