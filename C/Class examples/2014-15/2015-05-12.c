// Copyright © 2015 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

#define ROWS 10
#define COLUMNS 40

//PROTOS
int FindDimH(int r, int c);
int FindDimV(int r, int c);

// Map is GLOBAL -- aarrgghhhh
char Map[ROWS][COLUMNS + 1];

int main()
{
    int t;
    for (t = 0; t < ROWS; ++t)
    {
        scanf("%s", Map[t]);
    }

    int r, c;
    int some_complex_condition = 1;
    while (some_complex_condition == 1)
    {
        scanf("%d", &r);
        scanf("%d", &c);

        if (r == -1 && c == -1)
        {
            some_complex_condition = 0;
        }
        else if (r < 0 || r >= ROWS || c < 0 || c >= COLUMNS)
        {
            printf("Out of the map\n");
        }
        else if (Map[r][c] == '=')
        {
            printf("Splash!\n");
        }
        else if (Map[r][c] == '*')
        {
            printf("You hit the ground. ");
            printf("Island size: %d x %d\n", FindDimH(r, c), FindDimV(r, c));
        }
        else
        {
            printf("D'ho!?");
        }
    }

    return EXIT_SUCCESS;
}

int FindDimH(int r, int c)
{
    int left = 0;
    while (c - left >= 0 && Map[r][c - left] == '*')
    {
        ++left;
    }

    int right = 0;
    while (c + right < COLUMNS && Map[r][c + right] == '*')
    {
        ++right;
    }

    return left + right - 1;
}

int FindDimV(int r, int c)
{
    int up = 0;
    while (r - up >= 0 && Map[r - up][c] == '*')
    {
        ++up;
    }

    int down = 0;
    while (r + down < ROWS && Map[r + down][c] == '*')
    {
        ++down;
    }

    return up + down - 1;
}
