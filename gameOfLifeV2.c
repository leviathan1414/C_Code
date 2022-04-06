// Conways game of life
/*
    Initially, there is a grid with some cells that may be alive or dead. Generate the next generation of cells based on the following rules:

    Rules:
    1. Any living cell with fewer than two lving neighbors dies (As if caused by under-population).
    2. Any living cell with two or three live neighbors lives on to the next generation.
    3. Any living cell with more than three live neighbors dies (As if caused by overpopulation).
    4. Any dead cell with exactly three live neighbors becomes a live cell (As if by reproduction).

    '*' represents an alive cell.
    '0' represents a dead cell.
*/

#include <stdio.h>
#include <string.h>
#include "GOLifeLibrary.h"


typedef struct
{
    int x[16];
    int y[16];
}cellPosition;

int main()
{
    //TODO - create initial board layout
    int const columns = 4;
    int const rows = 4;
    int boardLayout[rows][columns] = {
        {0, 0, 0, 0},
        {0, 1, 0, 1},
        {0, 0, 0, 1},
        {0, 0, 0, 0}
    };

    //prints initial board layout with printArray() function
    for(int i = 0; i < rows; i++)
    {
        printArray(boardLayout[i], columns);
        printf("\n");
    }

    //finding position of live cells and dead cells
    int one = 0;
    int zero = 0;
    cellPosition liveCell;
    int liveCells[16];

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            if(boardLayout[i][j] == 1){
                liveCells[one] = j;
                one++;
                //printf("%d\n", liveCell.x[one]);
            }
            else{
                liveCell.x[zero] = 0;
                //printf("%d\n", liveCell.x[zero]);
                zero++;
            }
        }  
    }

    //Printing location of live cells to check
        for(int i = 0; i < rows; i++)
    {
        if(liveCells[i] == 1)
        printf("%d\n", i);
    }

    return 0;
}

/*
    TODO - create initial board state layout (done)
    TODO - check coordinates for each cell (x, y) (done)
    TODO - Count neighbors of live/dead cells
    TODO - Impliment rules of death (Rule 1 - underPop)
    TODO - Impliment rules of death (Rule 2)
    TODO - Impliment rules of death (Rule 3 - overPop)
    TODO - Impliment rules of reproduction (Rule 4 - neighbors count)
    TODO - Update location of new cells according to rules
    TODO - Update new board state layout
    TODO - While(true loop) to keep game running
    TODO - initialize new round (y/n)
    TODO - End game (No live cells or user quits)
*/