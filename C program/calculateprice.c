#include <stdio.h>

void calculateprice(float n);

int main()
{
    float price;
    printf("enter price: ");
    scanf("%f",&price);

    calculateprice(price);

    return 0;
}

void calculateprice(float n)
{
    n += n*(0.18);
    printf("price after gst is: %.3f",n);
}
