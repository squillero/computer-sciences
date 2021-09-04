/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    for (int t = 0; t < 10; ++t)
    {
        int c = getchar();
        if (c >= 'a' && c <= 'z')
        {
            int pos = c - 'a';
            printf("%c: position: %d\n", c, pos);
            printf("===> %c (%d)\n", 'A' + pos, 'A' + pos);
        }
        else
        {
            printf("%c\n", c);
        }
    }
    return EXIT_SUCCESS;
}
