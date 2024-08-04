#include <stdio.h>

float largestfloat(float a, float b, float c, float d);

int main(void)
{
    float num1 = 4.89;
    float num2 = 5.09;
    float num3 = 800.98;
    float num4 = 7999.76;
    float p = largestfloat(num1, num2, num3, num4);
    printf("%.2f is the largest\n",p);
    return 0;
}

float largestfloat(float a, float b, float c, float d)
{
    float max = a;
    if(b > max)
    {
        max = b;
    }
    if(c > max)
    {
        max = c;
    }
    if(d > max)
    {
        max = d;
    }
    return max;
}
