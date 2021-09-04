/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef unsigned long int Bob;

struct _COMPLEX
{
    double re, im;
};
typedef struct _COMPLEX COMPLEX;

int main()
{
    Bob foo;
    Bob bar;
    COMPLEX n1, n2;
    FILE *zop;

    printf("Size of Bob: %d\n", sizeof(Bob));
    return 0;
}
