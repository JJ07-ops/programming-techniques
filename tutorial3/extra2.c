#include <stdio.h>

int main(void)
{
    int x,sum, a,b,c,d,;
    sum =0;
    x =0;
    scanf("%d",&x);
    for(int y = 0; y < x; y++)
    {
        scanf("%d",&a);
        sum = sum + a;
    }

    printf("The sum is : %d",sum);

}