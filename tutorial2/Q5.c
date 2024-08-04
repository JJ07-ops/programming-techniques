#include <stdio.h>

int main(void)
{
    int prime = 0;
    int x, y = 0;

    printf("Input number: ");
    scanf("%d",&prime);

    //check if it is bigger than 1
    if (prime < 2)
    {
        printf("%d is not a prime number\n", prime);
        return 0;
    }

    //check if it can divide all the numbers from 2 to itself
    x = 2;
    while(x != prime)
    {
        if((prime % x) == 0)
        {
            printf("%d is not a prime number\n", prime);
            return 0;
        }

        x++;
    }

    printf("%d is a prime number\n", prime);
    return 0;
}