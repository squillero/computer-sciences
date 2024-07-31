// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main()
{
    for (int r = 0; r < SIZE; r = r + 1)
    {
        for (int c = 0; c < r; c = c + 1)
        {
            printf(" ");
        }
        for (int c = 0; c < 10 - r; c = c + 1)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
