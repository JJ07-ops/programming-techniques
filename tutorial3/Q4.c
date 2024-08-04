#include <stdio.h>

int main(void)
{
    int x, y, sum;
    y = 0;
    x = 0;
    sum = 0;

    printf("Size: ");
    scanf("%d", &x);

    for(int i = 0; i < x; i++)
    {
        for (int j = 0; j < (i + 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }

}