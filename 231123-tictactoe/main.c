#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char square[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int choice, player;

int checkForWin();
void displayBoard();
void markBoard(char mark);

int main()
{
    printf("Hello, world");

    return 0;
}

/*****************************************************************
 * FUNCTION: RETURN GAME STATUS
 * 1 FOR GAME IS OVER WITH RESULT
 * -1 FOR GAME IS IN PROGRESS
 * 0 FOR GAME OVER AND NO RESULT
 ******************************************************************/
int checkForWin()
{
    int returnValue = 0;
    if ((square[1] == square[2] && square[2] == square[3]) ||
        (square[4] == square[5] && square[5] == square[6]) ||
        (square[7] == square[8] && square[8] == square[9]) ||
        (square[1] == square[4] && square[4] == square[7]) ||
        (square[2] == square[5] && square[5] == square[8]) ||
        (square[3] == square[6] && square[6] == square[9]) ||
        (square[1] == square[5] && square[5] == square[9]) ||
        (square[3] == square[5] && square[5] == square[7]))
    {
        returnValue = 1;
    }
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
             square[4] != '4' && square[5] != '5' && square[6] != '6' &&
             square[7] != '7' && square[8] != '8' && square[9] != '9')
    {
        returnValue = 0;
    }
    else
    {
        returnValue = -1;
    }

    return returnValue;
}