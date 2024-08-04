#include <stdio.h>

int main(void)
{
    //declare
    unsigned int a = 40000;
    unsigned int hex;
    int c = 200;
    int d = 100;
    char s[11];
    float f = 1.234;
    int hour;
    int minute;
    int second;

    //a
    printf("%-15.8u\n", a);

    //b
    scanf("%x", &hex);
    printf("%x\n", hex);

    //c
    printf("%d\n", c);
    printf("%+d\n", c);

    //d
    printf("%#0Xd\n", c);

    //e
    scanf("%*c%10[^p]", s);
    printf("%s\n", s);

    //f
    printf("%09.3f\n", f);

    //gg
    scanf("%*c%d%*c%d%*c%d",&hour, &minute, &second);
    printf("%d hours %d minutes %d seconds\n", hour, minute, second);


    return 0;
}
