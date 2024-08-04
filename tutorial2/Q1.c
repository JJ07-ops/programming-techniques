#include <stdio.h>

int main(void)
{
    float sales = 0;
    float salary = 0;

    while(1)
    {
        printf("Enter sales in dollars (-1 to end):");
        scanf("%f",&sales);

        if(sales == -1)
        {
            break;
        }

        salary = 200 + 0.09 * sales;
        printf("Salary is: $%.2f \n\n", salary);
    }

    return 0;
}