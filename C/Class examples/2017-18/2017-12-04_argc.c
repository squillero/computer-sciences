// Copyright © 2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("Hello argc/argv!\n");

    printf("ARGC: %d\n", argc);
    for (int t = 0; t < argc; ++t)
    {
        printf("Argument %d: %s\n", t, argv[t]);
    }
    return 0;
}
