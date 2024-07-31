// Copyright © 2016-2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    printf("ARGC: %d\n", argc);
    for (int t = 0; t < argc; ++t)
    {
        printf("ARGV %d: %s\n", t, argv[t]);
    }
    return EXIT_SUCCESS;
}
