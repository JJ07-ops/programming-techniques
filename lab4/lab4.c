#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h> //for gettimeofday()
#include <unistd.h> //delay(sleep) function, can just delete if not needed (only works in linux????)

void movement(char map[12][12], char move);
void printmap(char map[12][12]);

//declare the global variables
int currentrow = 1;
int currentcolumn = 1;
int TreasuresCollected = 0;

int main(void)
{
    //declare the local variables
    char map[12][12];
    int NumTreasure;
    int row;
    int column;
    char move;

    //create the map
    //wall
    for(int i = 0; i < 12; i = i + 11)
    {
        for(int j = 0; j < 12; j++)
        {
            map[i][j] = '#';
        }
    }

    for(int j = 0; j < 12; j = j + 11)
    {
        for(int i = 0; i < 12; i++)
        {
            map[i][j] = '#';
        }
    }

    //hunting ground
    for(int i = 1; i < 11; i++)
    {
        for(int j = 1; j < 11; j++)
        {
            map[i][j] = '.';
        }
    }

    //print the initial map
    printmap(map);

    //Ask user for the amount of treasures
    printf("Number of treasures: ");
    scanf("%d", &NumTreasure);

    //Place the treasures randomly into the map
    for(int i = 0; i < NumTreasure; i++)
    {
        while(1) //repeat until location is not occupied
        {
            srand(time(0));
            row = rand() % 10 + 1;
            column = rand() % 10 + 1;
            if(map[row][column] != '@')
            {
                map[row][column] = '@';
                break;
            }
        }
    }

    //Print the map with treasures
    printmap(map);

    //User starts at upper left conner
    map[currentrow][currentcolumn] = 'X';
    printmap(map);

    //give countdown (just delete if not needed)
    printf("Game and timer starts in ");
    printf("3...");
    sleep(1);
    printf("2...");
    sleep(1);
    printf("1...");
    sleep(1);
    printf("START!\n");

    //start timer
    struct timeval t1, t2;
    double elapsedTime;
    gettimeofday(&t1, NULL);


    //start game
    while(NumTreasure != TreasuresCollected) //keep running until all treasures have been collected
    {
        //Ask user for next move
        printf("Enter next move <A for left, D for right, W for up, S for down>: ");
        scanf(" %c", &move);

        //Move to the next step
        movement(map, move);

        //Print the map and the number of treasures left
        printmap(map);
        printf("\nNumber of treasures collected: %d\n", TreasuresCollected);
    }

    //end timer
    gettimeofday(&t2, NULL);
    elapsedTime = (t2.tv_sec - t1.tv_sec) * 1000.0;      // sec to ms
    elapsedTime += (t2.tv_usec - t1.tv_usec) / 1000.0;   // us to ms
    printf("\nExecution time : %.1fs\n", elapsedTime / 1000);

    //decide if win or lose based on timer
    int decider = 20;
    if(elapsedTime / 1000 > decider)
    {
        printf("YOU LOSE!!!\n");
    }
    else
    {
        printf("YOU WIN!!!\n");
    }



    return 0;
}

void printmap(char map[12][12])
{
    for(int i = 0; i < 12; i++)
    {
        for(int j = 0; j < 12; j++)
        {
            printf("%c ", map[i][j]);
        }
        printf("\n");
    }
}

void movement(char map[12][12], char move) //move and reduce treasure num
{
    switch(move)
    {
        case 'W':
        if(map[currentrow - 1][currentcolumn] != '#') //if wall
        {
            if(map[currentrow - 1][currentcolumn] == '@')
            {
                TreasuresCollected++;
            }
            map[currentrow][currentcolumn] = '.';
            map[currentrow - 1][currentcolumn] = 'X',
            currentrow--;
        }
        break;

        case 'A':
        if(map[currentrow][currentcolumn - 1] != '#') //if wall
        {
            if(map[currentrow][currentcolumn - 1] == '@')
            {
                TreasuresCollected++;
            }
            map[currentrow][currentcolumn] = '.';
            map[currentrow][currentcolumn - 1] = 'X',
            currentcolumn--;
        }
        break;

        case 'S':
        if(map[currentrow + 1][currentcolumn] != '#') //if wall
        {
            if(map[currentrow + 1][currentcolumn] == '@')
            {
                TreasuresCollected++;
            }
            map[currentrow][currentcolumn] = '.';
            map[currentrow + 1][currentcolumn] = 'X',
            currentrow++;
        }
        break;

        case 'D':
        if(map[currentrow][currentcolumn + 1] != '#') //if wall
        {
            if(map[currentrow][currentcolumn + 1] == '@')
            {
                TreasuresCollected++;
            }
            map[currentrow][currentcolumn] = '.';
            map[currentrow][currentcolumn + 1] = 'X',
            currentcolumn++;
        }
        break;
    }

}
