#include <stdio.h>

struct person
{
	int age;
	float weight;
	float height;
};

int main(void)
{
    struct person student[3];
    for(int i = 0; i < 3; i++)
    {
        printf("Enter age of student: \n");
        scanf("%d", &student[i].age);
        printf("Enter weight of student: \n");
        scanf("%f", &student[i].weight);
        printf("Enter height of student: \n");
        scanf("%f", &student[i].height);
    }

    printf("Age\tWeight\tHeight\n");

    for(int i = 0; i < 3; i++)
    {
        printf("%-3d\t%-6.2f\t%-6.2f\n", student[i].age, student[i].weight, student[i].height);
    }

    return 0;
}