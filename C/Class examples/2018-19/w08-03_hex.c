// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed char x = 0x7f;

    printf("x = 0x%02x\n", x);
    printf("%d\n", x);
    ++x;
    printf("x = 0x%02x\n", x);
    printf("%d\n", x);

    return 0;
}
