// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

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
