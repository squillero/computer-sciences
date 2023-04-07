// Copyright © 2016-2017 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

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
