#include <stdio.h>

int main(void)
{
    int x;
    int y;

    puts("Enter two integer with a space in between: ");
    scanf( "%i%d", &x, &y );
    printf( "%d %d\n", x, y );


    return 0;
}
