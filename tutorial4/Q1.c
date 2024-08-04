#include <stdio.h>

int isEven(int x);

int main(void)
{
    int num1[] = {0, 3, 4, 345, 34543543,8766, 567657, 354,666, 555};
    for(int x = 0 ; x < 10 ; x++)
    {
        if(isEven(num1[x]) == 1)
        {
            printf("%d is even.\n", num1[x]);
        }
        else
        {
            printf("%d is not even.\n", num1[x]);
        }
    }
    return 0;
}


int isEven(int x)
{
    if((x % 2) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
