#include <stdio.h>

int main(void)
{

    printf("Integer integer values 0-9 for 3 times: \n");

    for(int i = 0; i < 3; i++)
    {
        int integer;
        printf("  is the integer entered\r");
        scanf("%d", &integer);
    }

    return 0;
}
