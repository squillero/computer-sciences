/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
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
