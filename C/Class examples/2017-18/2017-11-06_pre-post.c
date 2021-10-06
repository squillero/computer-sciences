/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int foo = 42;

    printf("Increments:\n");
    foo = foo + 1; // lame
    foo += 1;      // slightly better
    foo++;         // reasonable
    ++foo;         // that's it!

    for (int t = 0; t < 10; ++t)
    {
    }

    return 0;
}
