// Copyright © 2015 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char up(char c);

int main()
{
    char c;

    c = up('B');
    printf("%c\n", c);
    c = up('g');
    printf("%c\n", c);

    return 0;
}

char up(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return c - 'a' + 'A';
    }
    else
    {
        return c;
    }
}
