#include <stdio.h>

int main()
{
    int x = 1, y = 1, z;
    z = x++ + ++y - y;
    printf("%i",z);
}