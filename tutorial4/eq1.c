#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int multiple(int a, int b);


int main(void)
{
    int x = 0;
    int y = 0;
    scanf("%d",&x);
    scanf("%d",&y);
    int a = multiple(x,y);
    if(a == 1)
    {
        printf("%d is a multiple of %d.",x,y);
    }
    else
    {
        printf("%d is not a multiple of %d.",x,y);
    }

    return 0;
}

int multiple(int a, int b)
{
    if((a % b) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
