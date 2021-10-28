// Copyright © 2019-2020 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

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
