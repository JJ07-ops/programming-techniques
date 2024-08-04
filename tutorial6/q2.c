#include <stdio.h>

float Discount(int *x);

int main(void)
{
    int price;
    printf("Enter price of item: ");
    scanf("%d", &price);
    float currentprice = Discount(&price);
    printf("Price after discount: %.2f\n", currentprice);

    return 0;
}

float Discount(int *x)
{
    if(*x < 10)
    {
        return *x * 0.8;
    }
    else if(*x >= 10)
    {
        return *x * 0.7;
    }
    return 0;
}