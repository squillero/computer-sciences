// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c = '!';

    printf("%c\n", c);
    printf("%c\n", toupper(c));
    printf("%c\n", c - 'a' + 'A');

    return 0;
}
