#include <stdio.h>

int main(void)
{
    int x,y;
    printf("Enter two integers: \n");
    scanf("%d %d",&x,&y);

    //compare
    if(x < y)
    {
        printf("%d is not a multiple of %d.\n",x,y);
    }

    if((x%y) == 0)
    {
        printf("%d is a multiple of %d.\n",x,y);
    }

    if((x%y) != 0)
    {
        printf("%d is not a multiple of %d.\n",x,y);
    }
}