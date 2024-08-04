#include <stdio.h>

int main(void)
{
    int x, sum;
    x = 0;
    sum = 0;

    for(int i = 1; i < 6; i++)
    {
        int y = i;
        sum = 1;
        while (y != 0)
        {
            sum = sum * y;
            y--;
        }
        printf("The factorial of %d is %d\n",i , sum);
    }

}