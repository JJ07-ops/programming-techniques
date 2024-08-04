#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Decision (int x, int random);
int r = 2;

int main(void)
{
    srand((int)time(0));
    int random = rand()%1000 + 1;

    printf("I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess.\n");

    while(1)
    {
        if(r == 1)
        {
                printf("I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess.\n");

                random = rand() % 1000 + 1;
                r++;
        }

        int guess = 0;
        scanf("%d", &guess);

        if(Decision(guess, random) == 1)
        {
            printf("Too high. Try again.\n");
        }
        if(Decision(guess, random) == 2)
        {
            printf("Too low. Try again.\n");
        }
        if(Decision(guess, random) == 0)
        {
            printf("Excellent! You guessed the number!\nWould you like to play again (Press 1 to continue and 0 to exit)?\n");
            scanf("%d", &r);
            if(r == 0)
            {
                return 0;
            }
            else if(r == 1)
            {
                continue;
            }
        }
    }

    return 0;
}

int Decision (int x, int random)
{
    if(random < x)
    {
        return 1;
    }
    else if(random > x)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
