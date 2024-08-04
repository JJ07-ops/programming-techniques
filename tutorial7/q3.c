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
        word [i] = toupper(word[i]);
        i++;
    }

    printf("%s", word);
    return 0;
}