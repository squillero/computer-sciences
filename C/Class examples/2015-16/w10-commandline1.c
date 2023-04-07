// Copyright © 2015-2016 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int t;

    printf("argc: %d\n", argc);
    for (t = 0; t < argc; t += 1)
    {
        printf("ARG %d: %s\n", t, argv[t]);
    }

    return EXIT_SUCCESS;
}
