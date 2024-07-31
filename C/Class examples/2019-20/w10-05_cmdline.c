// Copyright © 2019-2020 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int z = 42;
    for (int t = 0; t < argc; ++t)
    {
        printf("%d) \"%s\"\n", t, argv[t]);
    }
    return 0;
}
