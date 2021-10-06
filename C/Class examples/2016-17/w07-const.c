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
    int t = 42;
    printf("The answer is %d\n", t);

    t = 042;
    printf("The answer is %d\n", t);

    t = 0x42;
    printf("The answer is %d\n", t);

    unsigned long int a;
    a = 1;
    while (a != 0)
    {
        printf("%lu * 2", a);
        a *= 2;
        printf(" = %lu\n", a);
    }

    return 0;
}
