#include <stdio.h>

void rectangle(int side1, int side2);

int main(void)
{
    int a = 4;
    int b = 5;
    rectangle(a,b);
    return 0;
}

void rectangle(int side1, int side2)
{
    //rows
    for(int i = 0; i < side1; i++)
    {
        //for columns
        for(int j = 0; j < side2; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}