/********************************************************************-*-c-*-*\
*               *  Class examples for Computer Sciences 2014-15              *
*    #####      *  (!) Giovanni Squillero <giovanni.squillero@polito.it>     *
*   ######      *                                                            *
*   ###   \     *  Copying and distribution of this file, with or without    *
*    ##G  c\    *  modification, are permitted in any medium without royalty *
*    #     _\   *  provided this notice is preserved.                        *
*    |   _/     *  This file is offered as-is, without any warranty.         *
*    |  _/      *                                                            *
*               *  See: http://www.cad.polito.it/staff/squillero/dida/       *
\****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define NUM 10000

// DECLARATION -- PROTOTYPE+
void DrawRect(int, int);
void DrawLine(int numberOfCharacters);

int main()
{
    int rows, columns;

    scanf("%d", &rows);
    scanf("%d", &columns);

    DrawRect(rows, columns);

    return EXIT_SUCCESS;
}

void DrawRect(int r, int c)
{
    int t;
    for(t=0; t<r; ++t) {
        DrawLine(c);
    }
}

void DrawLine(int x)
{
    int t;
    for(t=0; t<x; ++t) {
        printf("#");
    }
    printf("\n");
}
