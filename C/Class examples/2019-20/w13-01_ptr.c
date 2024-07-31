// Copyright © 2019-2020 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

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
