#include <stdio.h>

void addition(double x, double y);
void subtraction(double x, double y);
void multiplication(double x, double y);
void division(double x, double y);

int main(void)
{
    //Declare values
    int operation;
    double x, y;

    //Make array of function pointers
    void (*array[4])(double a, double b);
    array[0] = addition;
    array[1] = subtraction;
    array[2] = multiplication;
    array[3] = division;

    //Ask user for input
    printf("Choose:\nPress 0 for addition\nPress 1 for subtraction\nPress 2 for multiplication\nPress 3 for division\n");
    scanf("%d", &operation);
    printf("Enter two double values: \n");
    scanf("%lf", &x);
    scanf("%lf", &y);

    //Perform operation chosen
    array[operation](x,y);
    return 0;
}

void addition(double x, double y)
{
    printf("Addition was performed.\n");
    printf("%lf plus %lf is %lf\n", x, y, x + y);
}

void subtraction(double x, double y)
{
    printf("Subtraction was performed.\n");
    printf("%lf minus %lf is %lf\n", x, y, x - y);
}

void multiplication(double x, double y)
{
    printf("Multiplication was performed.\n");
    printf("%lf multiplied by %lf is %lf\n", x, y, x * y);
}

void division(double x, double y)
{
    printf("Division was performed.\n");
    printf("%lf divided by %lf is %lf\n", x, y, x / y);
}