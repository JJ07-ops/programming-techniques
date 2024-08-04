#include <stdio.h>

void stringReverse(char word[]);

int main(void)
{
    char word[20];
    printf("Enter word: \n");
    scanf("%s",word);
    stringReverse(word);
    return 0;
}


void stringReverse(char word[]) //how to make the function that stops after encountering null????
{
    int size = 0;
    for(int i = 0; word[i] != '\0'; i++)
    {
        size++;
    }
    size ++; //size is including null character

    for(int j = (size - 1); j > -1; j--)
    {
        printf("%c", word[j]);
    }
    printf("\n");
}