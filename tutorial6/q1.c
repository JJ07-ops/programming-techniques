#include <stdio.h>

int highest(int *x, int *y, int *z);

int main(void)
{
    int a,b,c;

    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);

    int big = highest(&a, &b, &c);
    printf("Highest = %d\n",big);

    return 0;
}

int highest(int *x, int *y, int *z)
{
    int largest = *x;
    if(*y > largest)
    {
        largest = *y;
    }
    if (*z > largest)
    {
        largest = *z;
    }
    return largest;
}