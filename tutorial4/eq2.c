#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int reverse(int x);

int main(void)
{
    int g =0;
    scanf("%d",&g);
    int z = reverse(g);
    printf("%d",z);

    return 0;
}

int reverse(int x)
{
    int a = x / 100;
    int b = (x/10) % 10;
    int c = (x%100) % 10;
    return (c * 100 + b * 10 + a);
}
