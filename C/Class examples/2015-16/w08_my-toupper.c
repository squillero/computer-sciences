/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

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
