#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> //delay(sleep) function, can just delete if not needed (only works in linux????)

int state(char board[3][3]);
void printstate(char board[3][3], int currentstate);

int main(void)
{
    //declare the variables
    char board[3][3] = {{' ', ' ', ' '} , {' ', ' ', ' '} , {' ', ' ', ' '}};
    char move[3];
    int row;
    int column;
    char temp1;
    int currentstate = 2;
    int usercheck;
    int computercheck = 1;

    //start the game
    printf("GAME START!\n");

    //print empty board
    printf("%3c%4c%4c\n", 'A', 'B', 'C');
    printf("1%2c |%2c |%2c\n", board[0][0], board[0][1], board[0][2]);
    printf("  - + - + -\n");
    printf("2%2c |%2c |%2c\n", board[1][0], board[1][1], board[1][2]);
    printf("  - + - + -\n");
    printf("3%2c |%2c |%2c\n", board[2][0], board[2][1], board[2][2]);

    while(1) //while not done
    {
        usercheck = 1;
        //while slot entered is occupied
        while(usercheck == 1)
        {
            //Ask user for move
            printf("Enter your move: ");
            scanf(" %2s", move);

            //add move to board
            //row
            row = (move[0] - '0') - 1;
            //column
            temp1 = move[1];
            if(temp1 == 'A')
            {
                column = 0;
            }
            else if(temp1 == 'B')
            {
                column = 1;
            }
            else if(temp1 == 'C')
            {
                column = 2;
            }

            //check if slot is occupied or not
            if(board[row][column] == 'X' || board[row][column] == 'O')
            {
                usercheck = 1;
                printf("Slot is occupited, please enter another location.\n");
            }
            else
            {
                usercheck = 0;
            }
        }


        //Write X into the board
        board[row][column] = 'X';

        //print board after user's turn
        printf("%3c%4c%4c\n", 'A', 'B', 'C');
        printf("1%2c |%2c |%2c\n", board[0][0], board[0][1], board[0][2]);
        printf("  - + - + -\n");
        printf("2%2c |%2c |%2c\n", board[1][0], board[1][1], board[1][2]);
        printf("  - + - + -\n");
        printf("3%2c |%2c |%2c\n", board[2][0], board[2][1], board[2][2]);

        //check state
        currentstate = state(board);
        printstate(board, currentstate);
        if(currentstate != 2)
        {
            return 0;
        }

        //computer's turn
        //keep running if the random slot is occupied
        computercheck = 1;
        while(computercheck == 1)
        {
            //random
            srand(time(0));
            row = rand() % 3;
            column = rand() % 3;
            if(board[row][column] == 'X' || board[row][column] == 'O')
            {
                computercheck = 1;
            }
            else
            {
                computercheck = 0;
            }
        }

        //write O into the board
        board[row][column] = 'O';

        //print board after computer's turn
        printf("Computer's move: \n");
        sleep(2);
        printf("%3c%4c%4c\n", 'A', 'B', 'C');
        printf("1%2c |%2c |%2c\n", board[0][0], board[0][1], board[0][2]);
        printf("  - + - + -\n");
        printf("2%2c |%2c |%2c\n", board[1][0], board[1][1], board[1][2]);
        printf("  - + - + -\n");
        printf("3%2c |%2c |%2c\n", board[2][0], board[2][1], board[2][2]);

        //check state
        currentstate = state(board);
        printstate(board, currentstate);
        if(currentstate != 2)
        {
            return 0;
        }

    }

    return 0;
}

void printstate(char board[3][3], int currentstate)
{
        switch(currentstate)
        {
            case 1:
            printf("You WIN!\nGame Over\n");
            break;

            case -1:
            printf("You LOSE!\nGame Over\n");
            break;

            case 0:
            printf("TIE! No winners.\nGame Over\n");
            break;

            default:
            break;
        }
}

int state(char board[3][3])
{
    //win
    if(board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') //1
    {
        return 1;
    }
    if(board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') //2
    {
        return 1;
    }
    if(board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') //3
    {
        return 1;
    }
    if(board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') //4
    {
        return 1;
    }
    if(board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') //5
    {
        return 1;
    }
    if(board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') //6
    {
        return 1;
    }
    if(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')//7
    {
        return 1;
    }
    if(board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')//8
    {
        return 1;
    }


    //lose
    if(board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') //1
    {
        return -1;
    }
    if(board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') //2
    {
        return -1;
    }
    if(board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') //3
    {
        return -1;
    }
    if(board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') //4
    {
        return -1;
    }
    if(board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') //5
    {
        return -1;
    }
    if(board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') //6
    {
        return -1;
    }
    if(board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')//7
    {
        return -1;
    }
    if(board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')//8
    {
        return -1;
    }

    //draw
    int counter1 = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(board[i][j] == 'X' || board[i][j] == 'O')
            {
                counter1++;
            }
        }
    }
    if(counter1 == 9)
    {
        return 0;
    }

    //not finished
    return 2;
}

