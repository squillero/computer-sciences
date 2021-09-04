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
    signed char s1, s2, s3;
    unsigned char u1, u2, u3;

    s1 = 87;
    u1 = 87;

    s2 = 59;
    u2 = 59;

    s3 = s1 + s2;
    u3 = u1 + u2;

    printf("signed: %d + %d = %d (overflow!)\n", s1, s2, s3);
    printf("unsigned: %d + %d = %d\n", u1, u2, u3);

    unsigned char test;

    test = -1;
    printf("Real programmer's FF: %d\n", test);

    return 0;
}
