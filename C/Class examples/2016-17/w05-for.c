// Copyright © 2016-2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    printf("LOOPS!\n");

    t = 0; // INIT
    while (t < 10)
    {                                   // TEST
        printf("Looping (%d)...\n", t); // BODY
        t = t + 1;                      // UPDATE
    }

    printf("goodbye cruel world!\n");
    return 0;
}
