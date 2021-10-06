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
    printf("The answer is %d!\n", 42);
    printf("%d + %d = ?\n", 12, 23);
    printf("%d + %d = %d\n", 12, 23, 12 + 23);

    int i = 42;
    float f = 2.3;
    char c = 65;
    printf("i: %d / f: %f / c: %c\n", i, f, c);
    printf("i: %d / f: %f / c: %d\n", i, f, c);
    printf("i: %c / f: %d / c: %f\n", i, f, c); // last one is bad

    return 0;
}
