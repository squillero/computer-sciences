// Copyright © 2016-2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

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
