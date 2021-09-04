/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define DIM 1024

typedef struct _FOO
{
    int x;
    int y;
} FOO;

void func(FOO x)
{
    x.x = x.y = 23;
}

int main(int argc, char *argv[])
{
    FOO x;

    x.x = x.y = 42;
    printf("%d/%d\n", x.x, x.y);
    func(x);
    printf("%d/%d\n", x.x, x.y);

    return EXIT_FAILURE;
}
