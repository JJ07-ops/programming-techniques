#include <stdio.h>

int main(void)
{
    int sides = 0;
    int x = 0;
    int y = 0;

    printf("Number of sides: ");
    scanf("%d",&sides);
    if(sides < 1 || sides >20)
    {
        printf("Number needs to be between 1 and 20, inclusive.\n");
        return 0;
    }

    //columns
    while(y != sides)
    {
        x = 0;
        while(x != sides)
        {
        printf("*");
        x++;
        }

        printf("\n");
        y++;
    }


    return 0;
}