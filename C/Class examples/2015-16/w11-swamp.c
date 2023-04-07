// Copyright © 2015-2016 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROWS 20
#define COLUMNS 60

// PROTOS!
int CheckPath(int row, int *path);

char Map[ROWS][COLUMNS + 1];

int main(int argc, char *argv[])
{
    FILE *in;
    int r;

    if (argc != 2)
    {
        fprintf(stderr, "One argument required!\n");
        exit(EXIT_FAILURE);
    }
    in = fopen(argv[1], "r");
    if (in == NULL)
    {
        fprintf(stderr, "Error: can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    for (r = 0; r < ROWS; r += 1)
    {
        fscanf(in, "%s", Map[r]);
    }
    for (r = 0; r < ROWS; r += 1)
    {
        printf(">>%s<<\n", Map[r]);
    }

    // MAIN PROGRAM
    int path[COLUMNS];
    for (r = 0; r < ROWS; r += 1)
    {
        if (Map[r][0] == '*')
        {
            if (CheckPath(r, path) != 0)
            {
                int u;
                for (u = 0; u < COLUMNS; u += 1)
                {
                    printf("%d ", path[u]);
                }
                printf("\n");
            }
        }
    }

    fclose(in);
    return EXIT_SUCCESS;
}

int CheckPath(int row, int *path)
{
    int found = 1;
    int col;
    path[0] = row;
    for (col = 1; col < COLUMNS; col += 1)
    {
        if (row > 0 && Map[row - 1][col] == '*')
        {
            row = row - 1;
        }
        else if (Map[row][col] == '*')
        {
            ;
        }
        else if (row < ROWS - 1 && Map[row + 1][col] == '*')
        {
            row = row + 1;
        }
        else
        {
            found = 0;
        }
        path[col] = row;
    }
    return found;
}