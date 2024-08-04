//correct?

#include <stdio.h>

int main(void)
{
    //declaration of variables
    int numberOfColumns;
    int number[30];
    FILE *cfPtr;

    //choose amount of columns
    printf("Choose number of columns: \n?");
    scanf("%d", &numberOfColumns);

    //choose number for each column
    for(int i = 0; i < numberOfColumns; i++)
    {
        printf("Choose number for column %d: \n?", i + 1);
        scanf("%d", &number[i]);
    }


    //open file
    if((cfPtr = fopen("table.txt", "w")) == NULL)
    {
        printf("File could not be opened. \n");
        return 1;
    }

    //print the first row
    for(int i = 0; i < numberOfColumns; i++)
    {
        fprintf(cfPtr, "Mulof%2d\t\t\t", number[i]);
    }

    fprintf(cfPtr, "\n");

    //print the table
    //rows
    for(int j = 1; j < 13; j ++)
    {

        //column
        for(int i = 0; i < numberOfColumns; i++)
        {
        fprintf(cfPtr, "%7d\t\t\t", number[i] * j);
        }

        fprintf(cfPtr, "\n");

    }


    //close the table
    fclose(cfPtr);
    return 0;
}