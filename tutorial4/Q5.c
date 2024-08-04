#include <stdio.h>
#include <math.h>

float calculateCharges(float hours);

int main(void)
{
    float hours1;
    float hours2;
    float hours3;
    printf("Enter parked hours for car 1: \n");
    scanf("%f", &hours1);

    printf("Enter parked hours for car 2: \n");
    scanf("%f", &hours2);

    printf("Enter parked hours for car 3: \n");
    scanf("%f", &hours3);

    float charges1 = calculateCharges(hours1);
    float charges2 = calculateCharges(hours2);
    float charges3 = calculateCharges(hours3);

    float totalhours = hours1 + hours2 + hours3;
    float totalcharges = charges1 + charges2 + charges3;

    printf("Car	Hours	Charge\n");
    printf("1	%.1f	%.2f\n", hours1, charges1);
    printf("2	%.1f	%.2f\n",hours2, charges2);
    printf("3	%.1f	%.2f\n",hours3, charges3);
    printf("TOTAL	%.1f	%.2f\n",totalhours, totalcharges);
}

float calculateCharges(float hours)
{
    if(hours <= 3.0)
    {
        return 2.00;
    }
    else if(hours < 24.0)
    {
        float fees = 2.00 + (hours - 3.0) * 0.50;
        return fees;
    }
    else
    {
        return 10.00;
    }
}