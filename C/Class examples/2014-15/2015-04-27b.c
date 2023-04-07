// Copyright © 2015 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

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
