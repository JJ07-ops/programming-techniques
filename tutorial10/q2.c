#include <stdio.h>

int main(void)
{
    char fruit[20];
    FILE *cfPtr;
    int x = 0;

    if((cfPtr = fopen("fruits.txt", "r")) == NULL)
    {
        printf("File could not be opened. \n");
        return 1;
    }

    printf("Fruits in fruits.txt file: \n");
    fscanf(cfPtr, "%19s\n", fruit);

    while(!feof(cfPtr))
    {
        printf("%s\n", fruit);
        x++;
        fscanf(cfPtr, "%19s\n", fruit);
    }

    //why are the next 2 lines not in the lecture notes
    printf("%s\n", fruit);
    x++;

    printf("Number of fruits is %d\n", x);

    fclose(cfPtr);
    return 0;
}