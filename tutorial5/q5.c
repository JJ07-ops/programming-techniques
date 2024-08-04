#include <stdio.h>

int main(void)
{
    //declare matrix 1,2 and resultant matrix 3
    int matrix1[2][3] = {{5,10,15},{20,10,5}};
    int matrix2[3][2] = {{3,5},{7,9},{2,4}};
    int matrix3[2][2];

    //calculate matrix 3
    //row
    for(int i = 0; i < 2; i++)
    {
        //column
        for(int j = 0; j < 2; j++)
        {
            matrix3[i][j] = matrix1[i][0] * matrix2[0][j] + matrix1[i][1] * matrix2[1][j] + matrix1[i][2] * matrix2[2][j];
        }
    }

    //printf matrix 3
    printf("Product of matrix 1 and matrix 2: \n");
    for(int i = 0; i < 2; i++)
    {
        //column
        for(int j = 0; j < 2; j++)
        {
            printf("%5d", matrix3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
