// Copyright © 2018-2019 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char a = 15;
    unsigned char b = 240;
    unsigned char c = a ^ b;

    printf("%d %d -> %d\n", a, b, c);
    return 0;
}
