#include <stdio.h>

int main(void)
{
    int sum = 0;

    for(int x = 2; x <= 30; x += 2)
    {
        
            sum = sum + x;

    }
    printf("The sum of all even integers from 2 to 30 is %d\n", sum);
    return 0;
}