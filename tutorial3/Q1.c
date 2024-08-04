#include <stdio.h>

int main(void)
{
    int sum = 0;

    for(int x = 1; x <= 100; x++)
    {
        //if x is a multiple of 7
        if ((x % 7) == 0)
        {
            sum = sum + x;
        }
    }
    printf("The sum of all multiples of 7 from 1 to 100 is %d\n", sum);
    return 0;
}