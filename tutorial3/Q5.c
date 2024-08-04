#include <stdio.h>

int main(void)
{
    int product, quantity;
    float sum = 0;
    product = 0;
    quantity = 0;


    while(1)
    {
        printf("Product number (-1 to end): ");
        scanf("%d", &product);

        if(product == -1)
        {
            printf("\n");
            break;
        }

        printf("Quantity sold for one day: ");
        scanf("%d", &quantity);

        switch(product)
        {
            case 1:
                sum = sum + 2.98 * quantity;
                break;

            case 2:
                sum = sum + 4.50 * quantity;
                break;

            case 3:
                sum = sum + 9.98 * quantity;
                break;

            case 4:
                sum = sum + 4.49 * quantity;
                break;

            case 5:
                sum = sum + 6.87 * quantity;
                break;
        }
    }

    printf("The total retail value is $%.2f\n",sum);

}