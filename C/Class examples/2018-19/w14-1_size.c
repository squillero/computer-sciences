/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

struct FOO
{
    int a;
    short int b;
    char c;
};

union BAR
{
    int a;
    short int b;
    char c;
};

struct element
{
    char n[60];
    int m;
    float p;
};

int main()
{
    prontf("%d\n", sizeof(struct element));
    /*
    printf("%d\n", sizeof (struct FOO));
    printf("%d\n", sizeof (union BAR));

    union BAR b;
    b.a = 42;
    printf("%d\n", b.a);
    b.c = '!';
    printf("%d\n", b.a);
    */
    return 0;
}
