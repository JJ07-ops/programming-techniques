#include <stdio.h>

int main(void)
{
    int seconds,hours,minutes,rehours,reseconds,reminutes;
    seconds = 0;
    hours = 0;
    minutes = 0;
    printf("Total time elapsed (seconds): \n");
    scanf("%d",&seconds);

    //find value of hous
    hours = seconds / 3600;

    //find value of minutes
    rehours = seconds % 3600;
    minutes = rehours / 60;

    //find value of seconds
    reminutes = rehours % 60;
    seconds = reminutes;

    //print value
    printf("Time in hours: minutes: seconds is \n");
    printf("%d: %d: %d \n",hours,minutes,seconds);
}