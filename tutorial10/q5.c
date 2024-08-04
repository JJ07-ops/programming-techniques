#include <stdio.h>

int main(void)
{
    //declare variables
    char combination[8][3];
    int phone;
    int phoneArray[7];
    char list[2187][7]; //maybe delete 2187?

    //set the values in the combination array
    //rows
    combination[0][0] = 'A';
    combination[0][1] = 'B';
    combination[0][2] = 'C';
    combination[1][0] = 'D';
    combination[1][1] = 'E';
    combination[1][2] = 'F';
    combination[2][0] = 'G';
    combination[2][1] = 'H';
    combination[2][2] = 'I';
    combination[3][0] = 'J';
    combination[3][1] = 'K';
    combination[3][2] = 'L';
    combination[4][0] = 'M';
    combination[4][1] = 'N';
    combination[4][2] = 'O';
    combination[5][0] = 'P';
    combination[5][1] = 'R';
    combination[5][2] = 'S';
    combination[6][0] = 'T';
    combination[6][1] = 'U';
    combination[6][2] = 'V';
    combination[7][0] = 'W';
    combination[7][1] = 'X';
    combination[7][2] = 'Y';

    //ask user for seven digit number
    printf("Enter the 7 digit phone number\n");
    scanf("%d", &phone);

    //convert 7 digit numbers into array of 7 numbers
    phoneArray[0] = phone / 1000000;
    phoneArray[1] = (phone / 100000) % 10;
    phoneArray[2] = (phone / 10000) % 10;
    phoneArray[3] = (phone / 1000) % 10;
    phoneArray[4] = (phone / 100) % 10;
    phoneArray[5] = (phone / 10) % 10;
    phoneArray[6] = phone % 10;

    //make the list
    int x = 0;

    for(int i = 0; i++; i < 2187)
    {
        for(int j = 0; j++; j <7)
        {
            list[i][j] = combination[ (phoneArray[i]-2) ][x]
            x++;
        }
    }

    list[0][0]= combination[0][0];
    list[0][1]=
    list[0][2]=
    list[0][3]=
    list[0][4]=
    list[0][5]=
    list[0][6]=
    list[1][0]=combination[0][0]


    return 0;
}

void makelist()

//i give up lol