// Copyright © 2015 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

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
