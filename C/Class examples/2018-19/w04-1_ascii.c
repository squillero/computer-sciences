// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    double fa, ce;

    //printf("%c is %d %x\n", 'a', 'a', 'a');

    scanf("%c", &c);

    if (c == 'f')
    {
        scanf("%lg", &fa);
        ce = (fa - 32.0) * 5.0 / 9.0;
    }
    else if (c == 'c')
    {
        scanf("%lg", &ce);
        fa = ce * 9.0 / 5.0 + 32.0;
    }
    else if (c == '!')
    {
        printf("BANG!\n");
    }
    else
    {
        printf("D'ho!\n");
    }

    return 0;
}
