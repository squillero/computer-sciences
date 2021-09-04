/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

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
    for (t = 0; t < r; ++t)
    {
        DrawLine(c);
    }
}

void DrawLine(int x)
{
    int t;
    for (t = 0; t < x; ++t)
    {
        printf("#");
    }
    printf("\n");
}
