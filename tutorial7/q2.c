#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int i = 0;
    int z = 0;
    char word[60];
    printf("Enter word: \n");
    fgets(word, 59, stdin);

    while(word[i] != '\0')
    {
        if((isupper(word[i])) != 0)
        {
            z++;
        }
        i++;
    }

    if(z > 0)
    {
        printf("There are capital letters in it.\n");
    }
    else
    {
        printf("There are no capital letters in it.\n");
    }



    return 0;
}
