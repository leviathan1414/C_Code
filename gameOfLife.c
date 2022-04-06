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

int boardLayout()
{
    int const columns = 4;
    int const rows = 4;
    
    //int boardLayout[rows][columns];
    //memset(boardLayout, 0, rows*columns*sizeof(int));
    static int boardLayout[rows][columns] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    return *boardLayout;
}

int main()
{
    int columns = 4;
    int rows = 4;
    int boardState[4][4];
   // int a[][];
    int *p_c = &columns;
    int *p_r = &rows;
    int *p;
    int a[4][4];

    a = boardLayout();

    for(p = &a[0][0]; p <= &a[rows-1][columns-1]; p++)
    {
        printf("%d ", *p);
    }

/*
    for (int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
           // p[i][j] = boardLayout();
            printf("%d ", *(p + i + j));
        }
        printf("\n");
    }
*/

    return 0;
}

/*
    TODO - create initial board layout
    TODO - check coordinates for each cell (x, y)
    TODO - Count neighbors of live/dead cells
    TODO - Impliment rules of death (Rule 1 - underPop)
    TODO - Impliment rules of death (Rule 2)
    TODO - Impliment rules of death (Rule 3 - overPop)
    TODO - Impliment rules of reproduction (Rule 4 - neighbors count)
    TODO - Update location of new cells according to rules
    TODO - Update new board layout
    TODO - While(true loop) to keep game running
    TODO - initialize new round (y/n)
    TODO - End game (No live cells or user quits)
*/