// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

#define NUM 12

/* Remember to use comments! */

int main()
{
    for (int r = 1; r <= NUM; r = r + 1)
    {
        // print row
        for (int c = 1; c <= NUM; c = c + 1)
        {
            // print cell
            printf("%5d", r * c);
        }
        // print newline
        printf("\n");
    }

    return 0;
}
