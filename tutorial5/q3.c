#include <stdio.h>
#define SIZE 12

int Minimum(int x[]);

int main(void)
{
    int set[SIZE] = {34,57,76,45,8,76,42,56,76,43,56,76};
    int minimum = Minimum(set);
    printf("Minimum element is %d\n", minimum);
    return 0;
}

int Minimum(int x[])
{
    int minimum = x[0];

    for(int i = 0; i < SIZE - 1; i++)
    {
        if(minimum > x[i + 1])
        {
            minimum = x[i + 1];
        }
    }

    return minimum;
}