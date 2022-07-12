// Copyright © 2016-2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

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
