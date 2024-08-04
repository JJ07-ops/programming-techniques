#include <stdio.h>

int main(void)
{
    int hours = 0;
    int excesshours = 0;
    float rate = 0;
    float salary = 0;

    while(1)
    {
        printf("Enter number of hours worked (-1 to end):");
        scanf("%d",&hours);

        if(hours == -1)
        {
            break;
        }

        printf("Enter hourly rate of the worker ($00.00):");
        scanf("%f",&rate);

        if(hours == -1)
        {
            break;
        }

        if(hours > 40)
        {
            excesshours = hours % 40;
        }
        else
        {
            excesshours = 0;
        }

        salary = hours * rate + excesshours * 0.5 * rate;
        printf("Salary is $%.2f \n\n", salary);
    }

    return 0;
}