/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

// protos
void square(int size);
void draw_line(int n, char c);

int main()
{
    square(20);
}

void square(int size)
{
    for (int t = 0; t < size; ++t)
    {
        draw_line(t + 1, '!');
        draw_line(size - t, '-');
        printf("\n");
    }
}

void draw_line(int n, char c)
{
    for (int t = 0; t < n; ++t)
    {
        printf("%c", c);
    }
}
