// Copyright © 2015 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

// Protos
void swap(int *a, int *b);

int main(int argc, char *argv[])
{
    char *c;
    int *i;
    long *l;
    double *d;

    c = (char *)0x100;
    i = (int *)0x100;
    l = (long *)0x100;
    d = (double *)0x100;

    ++c;
    ++i;
    ++l;
    ++d;

    int x, y, z;
    int *pz;
    x = 23;
    y = 10;

    // BAD NON-PORTABLE CODE!!!!!!!!!!!!!!!!!!
    printf("%p :%d\n", &z, z);
    pz = (int *)0x28ff10;
    *pz = 42;
    printf("%p :%d\n", &z, z);

    printf("x: %p:%d, y: %p:%d\n", &x, x, &y, y);
    swap(&x, &y);
    printf("x: %p:%d, y: %p:%d\n", &x, x, &y, y);

    printf("Hello world!\n");
    return EXIT_SUCCESS;
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
