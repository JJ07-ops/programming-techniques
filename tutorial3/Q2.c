#include <stdio.h>

int main(void)
{
    int x, y = 0;

    do
    {
        printf("Enter two integers: \n");
        scanf("%d", &x);
        scanf("%d", &y);
    }
    while( (x > -1) && (y > -1));
    return 0;
}