#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    //declare variables
    int i = 0;
    char format1[60];
    char format2[60];
    int day;
    int month;
    int year;
    char monthstring[20];

    //get date in first format as a string
    printf("Enter date in the first format: \n");
    fgets(format1, 59, stdin);

    //get day in integer
    month = atoi(&format1[0]);

    //get month in integer
    day = atoi(&format1[3]);

    //get year in integer
    year = (atoi(&format1[6]));

    //change month to word format
    if(month == 1)
    {
        strcpy(monthstring, "January");
    }
    if(month == 2)
    {
        strcpy(monthstring, "February");
    }
    if(month == 3)
    {
        strcpy(monthstring, "March");
    }
    if(month == 4)
    {
        strcpy(monthstring, "April");
    }
    if(month == 5)
    {
        strcpy(monthstring, "May");
    }
    if(month == 6)
    {
        strcpy(monthstring, "June");
    }
    if(month == 7)
    {
        strcpy(monthstring, "July");
    }
    if(month == 8)
    {
        strcpy(monthstring, "August");
    }
    if(month == 9)
    {
        strcpy(monthstring, "September");
    }
    if(month == 10)
    {
        strcpy(monthstring, "October");
    }
    if(month == 11)
    {
        strcpy(monthstring, "November");
    }
    if(month == 12)
    {
        strcpy(monthstring, "December");
    }

    //print date in second format
    printf("%s %d, %d\n", monthstring, day, year);
    return 0;
}
