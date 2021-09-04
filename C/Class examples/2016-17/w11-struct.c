/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct _POINT
{
    double x, y;
    char note[31];
};
typedef struct _POINT POINT;

void printpoint(POINT p);

int main()
{
    typedef long long zappo_t;
    zappo_t t;

    printf("My struct size (fields + padding) is %u\n", sizeof(POINT));

    printpoint((POINT){23, 10, "hey"});

    POINT p1, p2;
    POINT px = {1.0, -1.0, "test"};

    p1.x = 0.0;
    p1.y = 0.0;
    strcpy(p1.note, "origin");

    printpoint(p1);
    printpoint(p2);

    p2 = p1;
    printpoint(p2);

    return 0;
}

void printpoint(POINT p)
{
    printf("Point at %p: (%g, %g): %s\n", &p, p.x, p.y, p.note);
}
