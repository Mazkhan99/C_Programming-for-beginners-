#include <stdio.h>

int main()
{
    float radius;
    printf("enter radius: ");
    scanf("%f",&radius);
    printf("Area of the circle of radius %.2f is: %.2f",radius, 3.14*radius*radius);
}