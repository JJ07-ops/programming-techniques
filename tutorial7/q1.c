#include <stdio.h>

void reverse(char *string);

int main(void)
{
    char name1[40];
    char name2[40];
    char name3[40];

    printf("Enter name of student 1: \n");
    fgets(name1, 39, stdin);
    printf("Enter name of student 2: \n");
    fgets(name2, 39, stdin);
    printf("Enter name of student 3: \n");
    fgets(name3, 39, stdin);

    reverse(name1); //why are there extra new lines?
    printf("\n");
    reverse(name2);
    printf("\n");
    reverse(name3);
    printf("\n");

    return 0;
}

void reverse(char *string)
{
    if(*string == '\0')
    {
        return;
    }
    else
    {
        reverse(&string[1]);
        printf("%c",string[0]);
    }
}