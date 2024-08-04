#include <stdio.h>

struct complex
{
	float real;
	float imaginary;
};

int main(void)
{
    struct complex x1;
    struct complex x2;
    struct complex x3;

    x1.real = 1;
    x1.imaginary = 2;
    x2.real = 4;
    x2.imaginary = 3;
    x3.real = x1.real + x2.real;
    x3.imaginary = x1.imaginary + x2.imaginary;

    printf("x1 + x2 = %.2f + %.2fi\n", x3.real, x3.imaginary);

    return 0;
}