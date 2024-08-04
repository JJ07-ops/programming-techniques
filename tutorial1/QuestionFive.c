#include <stdio.h>
#include <math.h>

int main(void)
{
    int x,n5,n4,n3,n2,n1;

    printf("input 5-digit number: \n");
    scanf("%d",&x);

    n5 = x%10;
    x=x/10;
    n4 = x%10;
    x=x/10;
    n3 = x%10;
    x=x/10;
    n2 = x%10;
    x=x/10;
    n1 = x%10;
    x=x/10;

    printf("%d   %d   %d   %d   %d\n",n1,n2,n3,n4,n5);
}