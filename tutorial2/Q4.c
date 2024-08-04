#include <stdio.h>

int main(void)
{
    int binary = 0;
    int decimal,first,second,third,fourth,fifth = 0;
    int y = 0;

    printf("Input binary integer: ");
    scanf("%d",&binary);

    fifth = binary % 10;
    binary = binary /10;
    fourth = binary % 10;
    binary = binary /10;
    third = binary % 10;
    binary = binary /10;
    second = binary % 10;
    binary = binary /10;
    first = binary % 10;

    decimal = first * 16 + second * 8 + third * 4 + fourth * 2 + first * 1;
    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}