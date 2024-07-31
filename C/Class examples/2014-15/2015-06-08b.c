// Copyright © 2015 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

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
