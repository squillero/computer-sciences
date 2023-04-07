// Copyright © 2015-2016 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed char a, b, c;

    a = 120;
    b = 63;
    c = a + b;

    printf("Overflow: %d + %d = %d\n", a, b, c);
    return 0;
}
