#include <stdio.h>

void shift(char *p1, char *p2, char *p3, char *p4, char *p5);

int main(void)
{
    char c1 = 'A';
    char c2 = 'B';
    char c3 = 'C';
    char c4 = 'D';
    char c5 = 'E';

    shift(&c1, &c2, &c3, &c4, &c5);
    printf("%c%c%c%c%c\n",c1, c2, c3, c4, c5);
    shift(&c1, &c2, &c3, &c4, &c5);
    printf("%c%c%c%c%c\n",c1, c2, c3, c4, c5);
    shift(&c1, &c2, &c3, &c4, &c5);
    printf("%c%c%c%c%c\n",c1, c2, c3, c4, c5);
    shift(&c1, &c2, &c3, &c4, &c5);
    printf("%c%c%c%c%c\n",c1, c2, c3, c4, c5);
    shift(&c1, &c2, &c3, &c4, &c5);
    printf("%c%c%c%c%c\n",c1, c2, c3, c4, c5);

    return 0;
}

void shift(char *p1, char *p2, char *p3, char *p4, char *p5)
{
    char hold = *p1;
    *p1 = *p2;
    *p2 = *p3;
    *p3 = *p4;
    *p4 = *p5;
    *p5 = hold;
}