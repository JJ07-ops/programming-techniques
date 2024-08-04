#include <stdio.h>
#include <math.h>

double Distance(double x1, double y1, double x2, double y2);

int main(void)
{
    double x1 = 6.666;
    double y1 = 9.898;
    double x2 = 98.099;
    double y2 = 1098.79;
    printf("Distance between the two points is %f\n", Distance(x1, y1, x2, y2));

}

double Distance(double x1, double y1, double x2, double y2)
{
    double distance = sqrt(pow(y2 - y1, 2) + pow(x2 - x1, 2));
    return distance;
}

