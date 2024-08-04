#include <stdio.h>
#include <string.h>

struct food
{
	char name[15];
	int portion_weight;
	int calories;
};


int main(void)
{
    struct food meal[10];

    strcpy(meal[0].name, "apple"); //why not assignable
    meal[0].portion_weight = 4;
    meal[0].calories = 200;

    printf("%s %d %d\n", meal[0].name, meal[0].portion_weight, meal[0].calories);
    return 0;
}