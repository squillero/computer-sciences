// Copyright © 2016-2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

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
