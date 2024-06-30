#include <stdio.h>

int main()
{
    int marks[2][10];

    for (int i=2; i<=3; i++)
    {
        for (int j =1; j<=10; j++)
        {
            marks[i][j]=i*j;
            printf("%d\t",marks[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}