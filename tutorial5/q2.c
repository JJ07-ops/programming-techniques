#include <stdio.h>

int main(void)
{
    int set1[10];
    int set2[10];

    printf("Enter 10 values for set 1: \n");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &set1[i]);
    }

    printf("Enter 10 values for set 2: \n");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &set2[i]);
    }

    printf("Common values: \n");

    //compare each element of set 1 with all elements of set 2
    //for each element in set 1
    for(int i = 0; i < 10; i++)
    {

        //for all elements in set 2
        for(int j = 0; j < 10; j++)
        {
            if(set1[i] == set2[j])
            {
                printf("%d\n", set1[i]);
            }
        }

    }
    return 0;
}