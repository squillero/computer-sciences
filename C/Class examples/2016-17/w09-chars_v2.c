// Copyright © 2016-2017 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

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
