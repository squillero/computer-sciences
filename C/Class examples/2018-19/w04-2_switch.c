// Copyright © 2018-2019 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    scanf("%c", &c);

    double fa, ce;
    switch (c)
    {
    case 'f':
    case 'F':
        scanf("%lg", &fa);
        ce = (fa - 32.0) * 5.0 / 9.0;
        break;
    case 'c':
    case 'C':
        scanf("%lg", &ce);
        fa = ce * 9.0 / 5.0 + 32.0;
        break;
    default:
        printf("D'ho!\n");
    }

    return 0;
}
