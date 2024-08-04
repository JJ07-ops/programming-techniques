#include <stdio.h>

int main(void)
{
    char fruit[20];
    FILE *cfPtr;

    if((cfPtr = fopen("fruits.txt", "a")) == NULL)
    {
        printf("File could not be opened. \n");
        return 1;
    }

    printf("Add more fruits to fruits.txt: \n?");
    scanf("%19s", fruit);

    while(!feof(stdin))
    {
        fprintf(cfPtr, "%s\n", fruit);
        printf("?");
        scanf("%19s", fruit);
    }

    fclose(cfPtr);

    return 0;
}