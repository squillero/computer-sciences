// Copyright © 2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

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
