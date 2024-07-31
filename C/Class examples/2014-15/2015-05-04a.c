// Copyright © 2015 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

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
