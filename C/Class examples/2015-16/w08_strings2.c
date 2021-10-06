/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_LEN 1024

int main()
{
    char str[MAX_LEN];

    printf("Enter a word: ");
    scanf("%s", str);

    int pal;
    int r, l;

    // count characters
    r = 0;
    while (str[r] != '\0')
    {
        r += 1;
    }

    // check
    l = 0;
    r -= 1;
    pal = 1;
    while (r > l)
    {
        if (toupper(str[l]) != toupper(str[r]))
        {
            pal = 0;
        }
        l += 1;
        r -= 1;
    }

    if (pal == 1)
    {
        printf("Whoa!\n");
    }

    return 0;
}
