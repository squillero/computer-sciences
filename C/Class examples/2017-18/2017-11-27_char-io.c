// Copyright © 2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello char-based i/o!\n");

    char c;
    do
    {
        c = getchar();
        printf("%c", c);
    } while (c != EOF);

    return 0;
}
