#include <stdio.h>

struct shop
{
	char name[20];
    char foodtype[20];
	float cost;
};

void arrange(struct shop restaurant[], int j);

int main(void)
{
    struct shop restaurant[100];
    int i = 0;
    int j = 0;

    //keeps asking user to input information of restaurants
    while(i != 1)
    {
        printf("Enter name of the restaurant:\n");
        scanf(" %s", restaurant[j].name);
        printf("Enter type of food provided by the restaurant:\n");
        scanf(" %s", restaurant[j].foodtype);
        printf("Enter average cost per person of the restaurant:\n");
        scanf(" %f", &restaurant[j].cost);
        j++;

        puts("Press 1 to stop, press 0 to continue");
        scanf(" %d", &i);
    }

    //function to arange and print the restaurants from least to most expensive
    arrange(restaurant, j);

    return 0;
}

void arrange(struct shop restaurant[], int j)
{
    struct shop temp;
    //bubble sort
    //n - 1 repetitions
    for(int n = 0; n < j - 1; n++)
    {

        //each repetition, bring max cost to the right
        for(int m = 0; m < j - 1; m++)
        {
            if(restaurant[m].cost > restaurant[m + 1].cost)
            {
                temp = restaurant[m];
                restaurant[m] = restaurant[m + 1];
                restaurant[m + 1] = temp;
            }

        }
    }

    //print list of restaurants
    for(int o = 0; o < j; o++)
    {
        printf("%-10s\t%03.2f\t%-g10s\n", restaurant[o].name, restaurant[o].cost, restaurant[o].foodtype);
    }
}