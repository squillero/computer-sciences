// Copyright © 2015-2016 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define NUM_CHAR 4

/* PROTOS */
char ToUpper(char c);

int main()
{
    int c, d;
    int stop;

    int test = 'Ciao';

    stop = 0;
    c = getchar();
    while (stop == 0 && c != EOF)
    {
        d = toupper(c);
        putchar(d);
        c = getchar();
        if (c == '!')
        {
            stop = 1;
        }
    }

    return 0;
}

char ToUpper(char c)
{
    char r;

    if (c >= 'a' && c <= 'z')
    {
        r = c - 'a' + 'A';
    }
    else
    {
        r = c;
    }

    return r;
}
