/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j, len;
    char s[80], dest[80];
    while (gets(s) != NULL)
    {
        len = strlen(s);
        j = 0;
        for (i = len - 1; i >= 0; i--)
        {
            dest[j] = s[i];
            j++;
        }
        dest[j] = '\0';

        puts(dest);
    }

    return 0;
}
