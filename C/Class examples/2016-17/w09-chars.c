// Copyright © 2016-2017 Giovanni Squillero <squillero@polito.it>
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
        printf("Char '%c' (%d)", c, c);
        if (isalnum(c))
        {
            printf(" ALNUM");
        }
        if (isdigit(c))
        {
            printf(" IT'S A DIGIT");
        }
        if (isspace(c))
        {
            printf("SPACE!");
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}
