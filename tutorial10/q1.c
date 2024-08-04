#include <stdio.h>

int main(void)
{
    char fruit1[20] = "Apple";
    char fruit2[20] = "Orange";
    char fruit3[20] = "Grapes";
    char fruit4[20] = "Papaya";
    char fruit5[20] = "Banana";
    char fruit6[20] = "Kiwi";

    char fruit[20];
    FILE *cfPtr;

    if((cfPtr = fopen("fruits.txt", "w")) == NULL)
    {
        printf("File could not be opened. \n");
        return 1;
    }

    fprintf(cfPtr, "%s\n", fruit1);
    fprintf(cfPtr, "%s\n", fruit2);
    fprintf(cfPtr, "%s\n", fruit3);
    fprintf(cfPtr, "%s\n", fruit4);
    fprintf(cfPtr, "%s\n", fruit5);
    fprintf(cfPtr, "%s\n", fruit6);

    fclose(cfPtr);

    return 0;
}

