/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    a = 42;
    b = 23;

    printf("&a = 0x%x\n", &a);

    printf("a: %d  --  b: %d\n", a, b);
    printf("a: %d  --  b: %d\n", &a, &b); // cast ptr to int, yeuch
    printf("a: %x  --  b: %x\n", &a, &b); // cast ptr to int, yeuch
    printf("a: %p  --  b: %p\n", &a, &b); // correct, but not portable
    return 0;
}
