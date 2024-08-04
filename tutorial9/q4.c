#include <stdio.h>

struct person
{
	int studentID;
	char name[20];
	int mark;
};

int main(void)
{
    int i;
    puts("Enter number of student: ");
    scanf("%d", &i);
    struct person student[i];
    for(int j = 0; j < i; j++)
    {
        puts("Enter student ID of student:");
        scanf("%d", &student[j].studentID);
        puts("Enter name of student:");
        scanf("%19s", student[j].name);
        puts("Enter mark of student:");
        scanf("%d", &student[j].mark);
    }

    puts("Student list with marks more than 60 but less than 80: ");

    for(int j = 0; j < i; j++)
    {
        if(student[j].mark > 60 && student[j].mark < 80)
        {
            printf("%d\t%-20s\n", student[j].studentID, student[j].name);
        }

    }


    return 0;
}