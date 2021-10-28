// Copyright © 2018-2019 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Type 1 char: ");
    int c = getchar();
    printf("Hey! You typed %d (%c)\n", c, c);
    c = getchar();
    printf("and %d (%c)\n", c, c);

    return 0;
}
