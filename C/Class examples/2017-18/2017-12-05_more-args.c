// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

// Hello World$
// the$--------
// answer$-----
// is$---------
// 42$---------

int main(int argc, char *argv[])
{
    printf("I just got %d arguments\n", argc);
    for (int t = 0; t < argc; ++t)
    {
        printf("argv[%d] = ``%s''\n", t, argv[t]);
    }

    return EXIT_SUCCESS;
}
