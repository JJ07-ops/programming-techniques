#include <stdio.h>

int main(void)
{
    int marks[10];
    for(int i = 0; i < 10; i++)
    {
        printf("Enter marks for student %d:\n", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("Student\tMarks\n");

    for(int i = 0; i < 10; i++)
    {
        printf("%-7u\t%-5d\n", i + 1, marks[i]);
    }
    return 0;
}


