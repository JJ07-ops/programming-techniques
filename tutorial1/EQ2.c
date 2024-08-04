#include <stdio.h>

int main(void)
{
    int x,y;
    printf("Enter two integers: \n");
    scanf("%d %d",&x,&y);

    //compare
    if(x>y)
    {
        printf("%d is larger.\n",x);
    }

    if(y>x)
    {
        printf("%d is larger.\n",y);
    }

    if(x==y)
    {
        printf("These numbers are equal.\n");
    }
}