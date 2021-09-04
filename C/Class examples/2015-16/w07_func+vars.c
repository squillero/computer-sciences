/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define VAL 2

/* PROTOS */
void foo(int x);
void bar(int x);

void foo(int x)
{
    int gargle;

    gargle = x * VAL;
    printf("foo: %d\n", gargle);
}

void bar(int x)
{
    int gargle;

    gargle = x / VAL;
    printf("bar: %d\n", gargle);
}

int main()
{
    printf("Hello funcs\n");
    foo(42);
    bar(42);
    return 0;
}
